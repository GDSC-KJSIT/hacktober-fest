import java.util.Scanner;

public class TdRev {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter a string to reverse: ");
        String var = sc.nextLine();
        sc.close();

        StringBuffer sb = new StringBuffer();
        sb.append(var);
        sb.reverse();
        System.out.println(sb);
    }
}