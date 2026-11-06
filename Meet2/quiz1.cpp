#include <bits/stdc++.h>
using namespace std;

bool isGanjil(int n)
{
    return n & 1;
}

int main()
{
    int a;
    cin >> a;

    if (isGanjil(a))
        cout << "Ganjil\n";
    else
        cout << "Genap\n";
}

// Program Time Complexity: O(1)
// Program Space Complexity: O(1)



