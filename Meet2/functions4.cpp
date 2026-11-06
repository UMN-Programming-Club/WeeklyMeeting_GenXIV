#include <bits/stdc++.h>
using namespace std;

void callByValue(vector<int> arr)
{
    int bilanganMaximum = INT_MIN;
    for (int a : arr)
        bilanganMaximum = max(a, bilanganMaximum);

    cout << "Bilangan Terbesar: " << bilanganMaximum << '\n';
}

void callByReference(vector<int> &arr)
{
    int bilanganMaximum = INT_MIN;
    for (int a : arr)
        bilanganMaximum = max(a, bilanganMaximum);

    cout << "Bilangan Terbesar: " << bilanganMaximum << '\n';
}

int main()
{
    // Bayangkan kalian punya array yang terdiri dari 100000000 elemen
    vector<int> arr(100000000);

    callByValue(arr);
    callByReference(arr);
    return 0;
}


