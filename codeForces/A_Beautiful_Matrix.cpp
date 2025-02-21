#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // take where 1 are located
    int enieme_i, enieme_j;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                enieme_i = i;
                enieme_j = j;
            }
        }
    }
    int count = (abs(enieme_i - 3) + abs(enieme_j - 3));
    cout << count << endl;
    return 0;
}