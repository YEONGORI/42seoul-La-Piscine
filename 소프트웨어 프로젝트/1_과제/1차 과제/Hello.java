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

            primeFactors = primeFactorization(iNumbers[i], i);
            GCD = getGCD(primeFactors, iNumbers[i], i);

            System.out.print("Input Numbers : ");
            for (int j = -1; j < i; j++) {
                System.out.printf("%d ", iNumbers[j + 1]);
            }

            System.out.printf("\nLCN : %d", LCN);
            System.out.printf("\nGCD : %d", GCD);
        }

        scanner.close();
    }

    public static int[][][] primeFactorization(int iNumber, int iNumberCnt) {
        int primeFactors[][][] = new int[1000][2][100];
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

        return primeFactors;
    }

    public static int getGCD(int primeFactors[][][], int iNumber, int iNumberCnt) {
        int maxFactor = 1;
        int cnt = 0;
        int minExponent;
        int j = 0;
        for (int i = 0; i < 9; i++) {
            minExponent = 1000;
            j = 0;

            if (primeFactors[j][1][i] > 0) {
                for (j = 0; j < iNumberCnt; j++) {
                    if (primeFactors[j][1][i] > 0) {
                        if (primeFactors[j][1][i] < minExponent) {
                            minExponent = primeFactors[j][1][i];
                        }
                        cnt++;
                    }
                }
            }

            if (cnt == iNumberCnt) {
                maxFactor *= Math.pow(primeFactors[0][0][i], minExponent);
            }
        }

        return maxFactor;
    }
}