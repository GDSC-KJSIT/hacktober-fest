/*
 Author : Viren Joshi
 Language : C++
*/

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> v;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            v.push_back(nums1[i++]);
        }
        else if (nums1[i] > nums2[j])
        {
            v.push_back(nums2[j++]);
        }
        else
        {
            v.push_back(nums1[i++]);
            v.push_back(nums2[j++]);
        }
    }
    while (i < m)
    {
        v.push_back(nums1[i++]);
    }
    while (j < n)
    {
        v.push_back(nums2[j++]);
    }
    for (int itr = 0; itr < m; itr++)
    {
        nums1[itr] = v[itr];
    }
    for (int i = 0, itr = m; itr < m + n; i, itr++)
    {
        nums2[i] = v[itr];
    }
}

int main()
{
    vector<int> nums1;
    vector<int> nums2;
    int m, n;
    cout << "Enter the size of nums1: ";
    cin >> m;
    cout << "Enter the size of nums2: ";
    cin >> n;
    cout << "Enter the elements of nums1: ";
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    cout << "Enter the elements of nums2: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    merge(nums1, m, nums2, n);

    return 0;
}
