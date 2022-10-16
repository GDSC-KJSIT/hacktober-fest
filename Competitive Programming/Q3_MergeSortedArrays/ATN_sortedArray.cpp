#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n,m;
cin>>n>>m;
int arr1[n];
int arr2[m];

for (int i = 0; i < n; i++)
{
   cin>>arr1[i];
}

for (int i = 0; i < m; i++)
{
    cin>>arr2[i];
}
int arr3[n+m];
merge(arr1, (arr1 + n), arr2, (arr2 + m), arr3);
 
 cout<<"arr1 contains the elements:";
for (int i = 0; i < n; i++)
{
    arr1[i]=arr3[i];
    cout<<arr1[i]<<" ";
}
cout<<endl<<"arr2 contains the elements:";
for (int i = n; i < n+m; i++)
{
    arr2[i]=arr3[i];
    cout<<arr2[i]<<" ";
}
return 0;
}