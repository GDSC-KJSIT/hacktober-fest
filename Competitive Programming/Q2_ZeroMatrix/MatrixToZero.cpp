/*
 Author : Viren Joshi
 Language : C++
*/

#include <iostream>
#include <vector>

using namespace std;

void matrixToZero(vector<vector<int>> &matrix, int m, int n)
{
    vector<int> row(m, 0);
    vector<int> column(n, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] == 1 || column[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    // vector<vector<int>> matrix{{1,2,3},{4,0,6},{7,8,9}};
    vector<vector<int>> matrix;

    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

    matrixToZero(matrix, m, n);

    for (auto i : matrix)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}