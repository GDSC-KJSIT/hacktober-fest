import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class ZeroMatrixSD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of matrix:");
        int x = sc.nextInt();
        int y = sc.nextInt();

        int[][] matrix = new int[x][y];

        System.out.println("Enter elements of array:");
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        zeroMatrix(matrix, x, y);

        System.out.println("New matrix is:");
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }

    private static void zeroMatrix(int[][] matrix, int x, int y) {
        Set<Integer> rowsContainingZero = new HashSet<>();
        Set<Integer> colsContainingZero = new HashSet<>();

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (matrix[i][j] == 0) {
                    rowsContainingZero.add(i);
                    colsContainingZero.add(j);
                }
            }
        }

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (rowsContainingZero.contains(i) || colsContainingZero.contains(j))
                    matrix[i][j] = 0;
            }
        }
    }
}
