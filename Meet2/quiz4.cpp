#include <bits/stdc++.h>
using namespace std;

int fungsi(int a, int b)
{
    if (b == 0)
        return a;

    return fungsi(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Hasil: " << fungsi(a, b) << '\n';
}

// Program Time Complexity: O(log n)
// Program Space Complexity: O(1)



