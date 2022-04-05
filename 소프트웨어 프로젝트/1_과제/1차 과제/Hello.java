import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] iNumbers = new int[1024];

        for (int i = 0; true; i++) {
            System.out.print("Input : ");
            iNumbers[i] = scanner.nextInt();
            PrimeFactorization(iNumbers);
            System.out.printf("Input Numbers : %d", iNumbers[i]);

        }

        System.out.printf("LCN : %d", )
    }

    public static void PrimeFactorization(int[] iNumbers) {

    }
}