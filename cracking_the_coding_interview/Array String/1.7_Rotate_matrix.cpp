#include <bits/stdc++.h>
using namespace std;

void rotate90Degree(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
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
    int n = 4;

    // 4x4 matrix, values will be random from 1 to 9
    vector<vector<int>> matrix(n, vector<int>(n));

    srand(time(0)); // random seed

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand() % 10; // 0-9 random
        }
    }

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotate90Degree(matrix);

    cout << "\nRotated 90 Degree Matrix:\n";
    printMatrix(matrix);

    return 0;
}
