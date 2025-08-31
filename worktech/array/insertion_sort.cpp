// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {4, 5, 1, 2, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size;
    // there are we will implemet insertion sort

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (auto value : arr)
    {
        cout << value << ",";
    }

    return 0;
}