#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // Space Complexity: O(1)
    cin >> n;

    for (int i = 1; i < n; i += i) // Time Complexity: O(log n)
        cout << i << ' ';
    cout << '\n';
}

// Program Space Complexity: O(1)
// Program Time Complexity: O(log n)


