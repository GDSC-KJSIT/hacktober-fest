#include<bits/stdc++.h>
using namespace std;
int func(int t)
{
    if(t==1)
    {
        return 1;
    }
    else{
        return t*func(t-1);
    }
}
int main()
{
    int t;
    cin>>t;
    // taking input from the user

    cout<<func(t);

    return 0;
}