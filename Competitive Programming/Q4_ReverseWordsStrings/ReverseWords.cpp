/*
 Author : Viren Joshi
 Language : C++
 Time Complexity : O(n)
 Space Complexity : O(1)
*/

#include <iostream>
#include <string>
using namespace std;

string reverseString(string &s, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        swap(s[i], s[len - i - 1]);
    }
    return s;
}

string reverseWords(string &s)
{
    int lftmst = 0, i = 0, len = s.size(), j;
    while (s[i] == ' ')
        i++;
    lftmst = i;
    while (i < len)
    {
        if (i + 1 == len || s[i] == ' ')
        {
            j = i - 1;
            if (i + 1 == len)
                j++;
            while (lftmst < j)
            {
                swap(s[lftmst++], s[j--]);
            }
            lftmst = i + 1;
        }
        if (lftmst < i && s[lftmst] == ' ')
        {
            lftmst = i;
        }
        i++;
    }
    return reverseString(s, len);
}

int main()
{
    string s;
    getline(cin, s);
    cout << reverseWords(s);
    return 0;
}