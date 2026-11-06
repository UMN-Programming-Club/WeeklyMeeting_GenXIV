#include <bits/stdc++.h>
using namespace std;

int fungsi1(int arr[], int n)
{
    int bilanganTerkecil = INT_MAX;
    for (int i = 0; i < n; i++) // Time Complexity: O(n)
        bilanganTerkecil = min(arr[i], bilanganTerkecil);
    return bilanganTerkecil;
}

int main()
{
    int n; // Space Complexity: O(1)
    cin >> n;

    int arr[n]; // Space Complexity: O(n)
    for (int i = 0; i < n; i++) // Time Complexity: O(n)
        cin >> arr[i];

    cout << fungsi1(arr, n) << '\n';
}

// Program Space Complexity: O(n)
// Program Time Complexity: O(n)





