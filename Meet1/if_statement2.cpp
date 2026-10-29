#include <bits/stdc++.h>
using namespace std;

int main() {

    bool kondisi1 = true, kondisi2 = false;
    if (kondisi1 && kondisi2)
    {
        cout << "Keduanya benar!\n";
    }
    else if (kondisi1 || kondisi2)
    {
        cout << "Salah satu benar!\n";
    }
    else
    {
        cout << "Keduanya salah!\n";
    }

    return 0;
}
