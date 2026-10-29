#include <bits/stdc++.h>
using namespace std;

int main() {

    int nilai = 80;
    nilai = 91;
    if (nilai >= 85 && nilai <= 100)
    {
        cout << "Nilai diantara 85 - 100\n";
    }
    else if (nilai >= 80 && nilai < 85)
    {
        cout << "Nilai diantara 80 - 84\n";
    }
    else if (nilai >= 70 && nilai < 80)
    {
        cout << "Nilai diantara 70 - 79\n";
    }
    else
    {
        cout << "Nilai dibawah 70 atau diatas 100\n";
    }

    return 0;
}
