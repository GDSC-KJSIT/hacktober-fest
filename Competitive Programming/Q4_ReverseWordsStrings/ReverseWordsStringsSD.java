import java.util.Scanner;

public class ReverseWordsStringsSD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter string:");
        String str = sc.nextLine();

        System.out.println("Reversed string: " + reverseWordsStrings(str));
    }

    private static String reverseWordsStrings(String str) {
        String[] words = str.split(" ");
        StringBuilder strBuilder = new StringBuilder();

        for (int i = words.length - 1; i >= 0; i--) {
            strBuilder.append(words[i]);
            if (i > 0) strBuilder.append(" ");
        }

        return strBuilder.toString();
    }
}
