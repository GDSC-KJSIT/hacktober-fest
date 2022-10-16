#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0) return 1;

    int ans = n*factorial(n-1);
    return ans;
}

int main(){
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int n;
cin>>n;

cout<<factorial(n);

return 0;
}