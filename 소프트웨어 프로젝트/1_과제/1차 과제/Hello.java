import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int iNumbers[] = new int[1000];
        int primeFactors[][][] = new int[1000][2][100];
        int GCD = 1, LCN = 1;

        for (int i = 0; true; i++) {
            System.out.print("\nInput : ");
            iNumbers[i] = scanner.nextInt();
            if (iNumbers[i] == 0) {
                break;
            }

            primeFactorization(primeFactors, iNumbers[i], i);
            GCD = getGCD(primeFactors, i);
            LCN = getLCN(primeFactors, i);

            System.out.print("Input Numbers : ");
            for (int j = -1; j < i; j++) {
                System.out.printf("%d ", iNumbers[j + 1]);
            }

            System.out.printf("\nLCN : %d", LCN);
            System.out.printf("\nGCD : %d", GCD);
        }

        scanner.close();
    }

    public static int[][][] primeFactorization(int primeFactors[][][], int iNumber, int iNumberCnt) {
        int exponent, cnt = 0;

        primeFactors[iNumberCnt][0][cnt] = 1;
        primeFactors[iNumberCnt][1][cnt] = 1;

        for (exponent = 0; iNumber % 2 == 0; exponent++) {
            iNumber /= 2;
        }

        cnt++;
        primeFactors[iNumberCnt][0][cnt] = 2;
        primeFactors[iNumberCnt][1][cnt] = exponent;

        for (int divNumber = 3; iNumber != 1; divNumber += 2) {
            cnt++;
            for (exponent = 0; iNumber % divNumber == 0; exponent++) {
                iNumber /= divNumber;
            }
            primeFactors[iNumberCnt][0][cnt] = divNumber;
            primeFactors[iNumberCnt][1][cnt] = exponent;
        }

        for (int q = 0; q < iNumberCnt + 1; q++) {
            for (cnt = 0; cnt < 6; cnt++) {
                System.out.println(primeFactors[q][0][cnt] + " " +
                        primeFactors[q][1][cnt]);
            }
            System.out.println();
        }

        return primeFactors;
    }

    public static int getGCD(int primeFactors[][][], int iNumberCnt) {
        int GCD = 1, minExponent = 1, cnt = 0;

        for (int k = 0; primeFactors[0][0][k] != 0; k++) {
            cnt = 0;
            minExponent = primeFactors[0][1][k];
            for (int i = 0; i < iNumberCnt + 1; i++) {
                if (primeFactors[i][1][k] > 0) {
                    if (primeFactors[i][1][k] < minExponent) {
                        minExponent = primeFactors[i][1][k];
                    }

                    if (cnt == iNumberCnt) {
                        GCD *= Math.pow(primeFactors[0][0][k], minExponent);
                        // continue;
                    }
                    cnt++;
                }
            }
        }
        return GCD;
    }

    public static int getLCN(int primeFactors[][][], int iNumberCnt) {
        int LCN = 1, maxExponent = 1, cnt = 0;

        for (int k = 0; primeFactors[0][0][k] != 0; k++) {
            cnt = 0;
            maxExponent = primeFactors[0][1][k];

            for (int i = 0; i < iNumberCnt + 1; i++) {
                if (primeFactors[i][1][k] > 0) {
                    if (primeFactors[i][1][k] > maxExponent) {
                        maxExponent = primeFactors[i][1][k];
                    }
                    cnt++;
                }
            }

            if (cnt == 0) {
                maxExponent = 0;
            }
            LCN *= Math.pow(primeFactors[0][0][k], maxExponent);
            System.out.println(k);
        }
        return LCN;
    }

}