#include <bits/stdc++.h>
using namespace std;

bool dapatDibagi7(int n)
{
    return n % 7 == 0;
}

string genapGanjil(int n)
{
    if (n % 2 == 0)
    {
        return "Genap";
    }
    else
    {
        return "Ganjil";
    }

    // return (n & 1) ? "Ganjil" : "Genap"; // Ternary Operator (TL:DR shorter & simple version of an if statement)
}

float luasLingkaran(int r)
{
    return 3.14 * r * r;
}

int maxAB(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }

    // return (a > b) ? a : b; // Ternary Operator (TL:DR shorter & simple version of an if statement)
}

void greeting(string name)
{
    cout << "Hello " << name << " nice to meet you\n";

    return;
}

int main()
{
    cout << "Introduction to functions!\n";
    greeting("Pipi"); // Function Call

    int a = 10, b = 5;
    cout << "Bilangan yang lebih besar antara a & b: " << maxAB(a, b) << '\n';
    cout << "Luas Lingkaran apabila jari - jari lingkaran 7: " << luasLingkaran(7) << '\n';
    cout << "Apakah angka 120 merupakan angka genap / ganjil? " << genapGanjil(120) << '\n';
    cout << "Apakah angka 864197523 habis dibagi 7? " << (dapatDibagi7(864197523) ? "Ya" : "Tidak") << '\n';
}
