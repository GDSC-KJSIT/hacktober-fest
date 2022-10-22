import java.util.Scanner;

public class FactorialSD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number:");
        int n = sc.nextInt();

        System.out.println("Factorial of " + n + " is: " + factorial(n));
    }

    private static long factorial(int n) {
        return n == 1 ? n : n * factorial(n-1);
    }
}
