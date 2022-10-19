#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int r, c, x = -1, y = -1;
    cin >> r >> c;
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == x || j == y)
                matrix[i][j] = 0;
            else
            {
                if (i > x && j > y)
                    cin >> matrix[i][j];
                if (matrix[i][j] == 0)
                {
                    x = i;
                    y = j;
                    i = -1;
                    j = -1;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}