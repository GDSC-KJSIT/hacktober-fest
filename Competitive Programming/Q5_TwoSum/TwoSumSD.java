import java.util.HashMap;
import java.util.Scanner;

public class TwoSumSD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of the array:");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter sum:");
        int sum = sc.nextInt();

        System.out.println("Number of pairs: " + twoSum(arr, sum));
    }

    private static int twoSum(int[] arr, int sum) {
        HashMap<Integer, Integer> occurrenceMap = new HashMap<>();
        int ctr = 0;

        for (int a : arr) {
            occurrenceMap.put(a, occurrenceMap.getOrDefault(a, 0) + 1);
            ctr += occurrenceMap.getOrDefault(sum - a, 0);
        }

        return ctr;
    }
}
