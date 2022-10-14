/*
 Author : Viren Joshi
 Language : C++
 PS : Strings are immutable in C++. Hence the problem cannot be solved in O(1) space.
 Time Complexity : O(n)
*/


#include <iostream>
#include <vector>
using namespace std;

string reverseWords(string& s){
    vector<string> v;
    int cnt=0;
    string temp;
    for(int i=0; i<s.length();i++){
        temp = "";
        while(s[i]!=' ' && i<s.length()){
            temp+=s[i];
            i++;
        }
        if(temp != ""){
            v.push_back(temp);
            cnt++;
        }
    }
    temp = "";
    for(int i=cnt-1;i>=0;i--){
        temp+=v[i];
        if(i != 0) temp+=" ";
    }
    return temp;
}


int main(){
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
    return 0;
}