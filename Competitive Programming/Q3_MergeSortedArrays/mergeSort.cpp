#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> nums1, vector<int> nums2, int n, int m)
{
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> merged(n + m);

    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            merged[k] = nums1[i];
            i++;
        }
        else
        {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m)
    {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    for (int ele = 0; ele < nums1.size(); ele++)
    {
        nums1[ele] = merged[ele];
    }

    for (int i = 0, j = n; i < nums2.size(), j < merged.size(); i++, j++)
    {
        nums2[i] = merged[j];
    }

    cout << "Merged Array : ";

    for (auto elem : merged)
    {
        cout << elem << " ";
    }

    cout << endl;

    cout << "Array 1 of size n : ";

    for (auto elem : nums1)
    {
        cout << elem << " ";
    }

    cout << endl;

    cout << "Array 2 of size m : ";

    for (auto elem : nums2)
    {
        cout << elem << " ";
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> num1(n);
    vector<int> num2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> num1[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin >> num2[j];
    }

    merge(num1, num2, n, m);
    return 0;
}