#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // Space Complexity: O(1)
    cin >> n;

    int matrix[n][n]; // Space Complexity: O(n^2)
    // Time Complexity: O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    // Time Complexity: O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}

// Program Space Complexity: O(n^2)
// Program Time Complexity: O(n^2)


