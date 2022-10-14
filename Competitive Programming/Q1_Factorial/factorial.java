class Solution{
    public static void main(String[] args) {
        System.out.println(factorial(12));
    }
    
    static long factorial(int n){
        if (n==1){
            return n;
        }
        
        return (long) n * factorial(n-1);
    }
}