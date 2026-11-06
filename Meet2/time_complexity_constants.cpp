#include <bits/stdc++.h>
using namespace std;

int rumus1(int a, int b)
{
    return 2 * (a+1) + b * 3; // Time Complexity: O(1)
}

int main()
{
    int a = 2, b = 3; // Space Complexity: O(1)
    cout << rumus1(a, b) << '\n';

    bool kondisi1 = true, kondisi2 = false; // Space Complexity: O(1)
    if (kondisi1 && kondisi2)
        cout << "Keduanya benar!\n";
    else if (kondisi1 || kondisi2)
        cout << "Salah satu benar!\n";
    else
        cout << "Keduanya salah!\n";
    // Time Complexity: O(1)
}





