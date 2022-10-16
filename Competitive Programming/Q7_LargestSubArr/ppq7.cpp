#include<bits/stdc++.h>
using namespace std;
int main()
{
// 1 -23 5 4 -9 0
int n;
cin>>n;
int a [n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int curr =0;
int maxi= INT_MIN;
for(int i=0;i<n;i++)

{
    curr+= a[i];
    maxi = max(maxi,curr);
if(a[i]<0)
{
    curr=0;
}
}
cout<<maxi<<endl;
return 0;

}