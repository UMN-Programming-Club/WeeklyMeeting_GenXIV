#include <bits/stdc++.h>
using namespace std;

void recursive(int n)
{
    if (n == 0)
        return;

    cout << n << '\n';
    recursive(n - 1);
}

void recursive1(int n)
{
    if (n == 0)
        return;

    cout << "Logika dulu sebelum rekursi: " << n << '\n';
    recursive1(n - 1);
}

void recursive2(int n)
{
    if (n == 0)
        return;

    recursive2(n - 1);
    cout << "Logika setelah rekursi: " << n << '\n';
}

int main()
{
    int jumlah = 10;
    recursive1(jumlah);
    recursive2(jumlah);

    return 0;
}


