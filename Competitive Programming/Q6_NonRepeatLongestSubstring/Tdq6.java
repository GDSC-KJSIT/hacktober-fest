import java.util.HashSet;
public class Tdq6 {
public static String subString(String input){
    input=input.toLowerCase();
    HashSet<Character> hasharr = new HashSet<Character>();
    String finalans = "";
    String current = "";
    for (int i = 0; i < input.length(); i++) {
        char c = input.charAt(i);
        if (hasharr.contains(c)) {
            current = "";
            hasharr.clear();
        }
        current += c;
        hasharr.add(c);
        if (current.length() > finalans.length()) {
            finalans = current;
        }
}
return finalans;
}
public static void main(String[] args) {
    String input = "KJSOMAIYAINSTITUTEOFENGINEERINGANDINFORMATIONTECHNOLOGY";
    System.out.println(subString(input));
    }
}