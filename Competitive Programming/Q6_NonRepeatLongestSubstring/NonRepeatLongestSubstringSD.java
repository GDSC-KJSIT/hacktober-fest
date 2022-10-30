import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Scanner;

public class NonRepeatLongestSubstringSD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter string:");
        String str = sc.next();

        System.out.println("Length of non-repeating longest substring is : " + nonRepeatLongestSubstring(str));
    }

    private static int nonRepeatLongestSubstring(String str) {
        HashMap<Character, Integer> posMap = new HashMap<>();
        int max = 0, pos = 0;

        for (int i = 0; i < str.length(); i++) {
            Character c = str.charAt(i);

            if (posMap.containsKey(c))
                pos = Math.max(posMap.get(c) + 1, pos);

            max = Math.max(max, i - pos + 1);

            posMap.put(c, i);
        }

        return max;
    }
}
