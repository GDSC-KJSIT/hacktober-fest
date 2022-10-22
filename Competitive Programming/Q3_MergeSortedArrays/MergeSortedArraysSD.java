import java.util.Arrays;
import java.util.Scanner;

public class MergeSortedArraysSD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of first sorted array:");
        int n = sc.nextInt();
        int[] arr1 = new int[n];

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            arr1[i] = sc.nextInt();
        }

        System.out.println("Enter size of second sorted array:");
        int m = sc.nextInt();
        int[] arr2 = new int[m];

        System.out.println("Enter elements:");
        for (int i = 0; i < m; i++) {
            arr2[i] = sc.nextInt();
        }

        mergeSortedArrays(n, m, arr1, arr2);

        System.out.println("Array 1:");
        for (int a : arr1) {
            System.out.print(a + "\t");
        }
        System.out.println();
        System.out.println("Array 2:");
        for (int a : arr2) {
            System.out.print(a + "\t");
        }
    }

    private static void mergeSortedArrays(int n, int m, int[] arr1, int[] arr2) {
        int[] merged = new int[n+m];
        System.arraycopy(arr1, 0, merged, 0, n);
        System.arraycopy(arr2, 0, merged, n, m);
        Arrays.sort(merged);

        System.arraycopy(merged, 0, arr1, 0, n);
        System.arraycopy(merged, n, arr2, 0, m);
    }
}
