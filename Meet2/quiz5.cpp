#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;

    vector<int> arr(m, 1);
    arr[0] = arr[1] = 0;
    for (int i = 2; i < m; i++)
    {
        if (arr[i] == 1)
        {
            cout << i << ' ';
            for (int j = i+i; j < m; j += i)
                arr[j] = 0;
        }
    }
    cout << '\n';
}

// Program Time Complexity: O(n log n)
// Program Space Complexity: O(n)



