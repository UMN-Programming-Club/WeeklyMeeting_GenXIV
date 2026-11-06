#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];

    int newArr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            newArr[i][j] = arr[i][j];
            if (i > 0)
                newArr[i][j] += arr[i-1][j];

            if (j > 0)
                newArr[i][j] += arr[i][j-1];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << ' ';
        cout << '\n';
    }
}

// Program Time Complexity: O(n^2)
// Program Space Complexity: O(n^2)



