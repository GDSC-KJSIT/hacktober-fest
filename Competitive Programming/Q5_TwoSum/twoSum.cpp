#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<map>

int main(){
    int n;
    vector<int> nums;
    int target;
    
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements of the array"<<endl;
    int t;
    for(int temp=0;temp<n;temp++){
        cin>>t;
        nums.push_back(t);
    }
    cout<<"Enter the target number: ";
    cin>>target;
    map<int,int> dic;
    int a; int b;
    for(int i=0;i<nums.size();i++){
        dic[nums[i]]=i;
    }
    int arr[]={-1,-1};
    for(int i=0;i<nums.size();i++){
        if(dic.find(target-nums[i])!=dic.end()){
            int temp=dic[target-nums[i]];
            if(i!=temp){
                arr[0]=i;
                arr[1]=temp;
            }
        }
    }
    cout<<arr[0]<<" "<<arr[1]<<endl;
    return 0;
}