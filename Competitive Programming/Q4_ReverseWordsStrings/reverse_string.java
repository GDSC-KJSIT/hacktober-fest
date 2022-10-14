class Solution {
    public void reverseString(char[] s) {
        int end=s.length-1;
        int start=0;
        helper(s,start,end);
    }
    char[] helper(char[] s,int start,int end){
        if(start==end || start>end) return s;
        char temp=s[end];
        s[end]=s[start];
        s[start]=temp;
        return helper(s,start+1,end-1);
    }
}