import java.util.*;
class Main{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);  
        int d = sc.nextInt();
        System.out.println(factorial(d));
    }
    
    static long factorial(int n){
        if (n==1 || n==0 ){
            return 1;
        }
        
        return (long) n * factorial(n-1);
    }
}