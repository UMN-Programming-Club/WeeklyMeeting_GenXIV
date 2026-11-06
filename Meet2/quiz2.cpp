#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    long long int result = 1;
    for (int i = 0; i < b; ++i)
        result *= a;

    cout << result << '\n';
}

// Program Time Complexity: O(b) / O(n)
// Program Space Complexity: O(1)



