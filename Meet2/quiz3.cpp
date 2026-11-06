#include <bits/stdc++.h>
using namespace std;

int fungsi(int n)
{
    if (n <= 0)
        return 0;

    return n + fungsi(n - 1);
}

int main()
{
    int a;
    cin >> a;

    cout << "Hasil: " << fungsi(a) << '\n';
}

// Program Time Complexity: O(n)
// Program Space Complexity: O(n)



