#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        arr[i] = i+1;

    for (int i = 1; i < n; ++i)
        arr[i] += arr[i-1];

    cout << "Hasil Akhir: " << arr[n-1] << '\n';
}

// Program Time Complexity: O(n)
// Program Space Complexity: O(n)



