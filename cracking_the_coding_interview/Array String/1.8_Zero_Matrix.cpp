// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

// Zero Matrix Algorithm implement (CTCI 1.8)
void WriteAlgoForZero(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<bool> zeroRow(n, false);
    vector<bool> zeroCol(m, false);

    // Step 1: Find rows and cols where 0 is located
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                zeroRow[i] = true;
                zeroCol[j] = true;
            }
        }
    }

    // Step 2: Nullify rows
    for (int i = 0; i < n; i++)
    {
        if (zeroRow[i])
        {
            for (int j = 0; j < m; j++)
                matrix[i][j] = 0;
        }
    }

    // Step 3: Nullify columns
    for (int j = 0; j < m; j++)
    {
        if (zeroCol[j])
        {
            for (int i = 0; i < n; i++)
                matrix[i][j] = 0;
        }
    }
}

void printMatrix(vector<vector<int>> &matrix)
{
    for (auto row : matrix)
    {
        for (auto val : row)
            cout << val << " ";
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4, m = 4;

    // Directly assign values for testing purpose
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2},
        {3, 4, 5, 1}};

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    WriteAlgoForZero(matrix);

    cout << "\nZero Matrix Applied -> \n";
    printMatrix(matrix);

    return 0;
}
