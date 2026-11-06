#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int result1 = 0;
    for (int i = 1; i <= n; ++i)
        result1 += i;

    cout << "Hasil: " << result1 << '\n';
}

// Program Time Complexity: O(n)
// Program Space Complexity: O(1)



