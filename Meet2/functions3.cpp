#include <bits/stdc++.h>
using namespace std;

// Versi C++
void callByValue(int a, int b)
{
    a = a + b;
}

void callByReference(int &a, int &b)
{
    a = a + b;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 27, b = 30;
    callByValue(a, b);
    cout << "Isi Variabel a setelah menggunakan function Call by Value: " << a << '\n';
    callByReference(a, b);
    cout << "Isi Variabel a setelah menggunakan function Call by Reference: " << a << '\n';
}

// Versi C
/*
void callByValue(int a, int b)
{
    int sum = a + b;
    printf("Hasil Penjumlahan %d + %d = %d\n", a, b, sum);
}

void callByReference(int *a, int *b)
{
    *a = *a + *b;
}

void swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 27, b = 30;
    callByValue(a, b);
    printf("Hasil Penjumlahan %d + %d = ", a, b);
    callByReference(&a, &b);
    printf("%d\n", a);
}
*/
