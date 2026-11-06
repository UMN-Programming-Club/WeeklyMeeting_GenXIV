#include <bits/stdc++.h>
using namespace std;

long long int recursive(long long int a, long long int b)
{
    if (b <= 0)
        return 1;
    else if (b == 1)
        return a;

    if (b & 1)
    {
        int res = recursive(a, b/2);
        return res * res * a;
    }
    else
    {
        int res = recursive(a, b/2);
        return res * res;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Hasil: " << recursive(a, b) << '\n';
}

// Program Time Complexity: O(log n)
// Program Space Complexity: O(1) / O(log n) (Debateable)



