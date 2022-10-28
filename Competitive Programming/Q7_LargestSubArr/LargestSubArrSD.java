import java.util.Scanner;

public class LargestSubArrSD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of the array:");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Sum of the elements of the largest sub-array is: " + largestSubArr(arr));
    }

    private static int largestSubArr(int[] arr) {
        Integer sum = null, max = null;

        for (int a : arr) {
            if (sum == null) {
                sum = a;
                max = a;
            } else {
                sum = Math.max(sum + a, a);
                max = Math.max(max, sum);
            }
        }

        return max != null ? max : 0;
    }
}
