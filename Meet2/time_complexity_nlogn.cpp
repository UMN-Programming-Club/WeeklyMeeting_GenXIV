#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> &arr, int l, int r)
{
    int i = l - 1;
    for (int j = l; j <= r; j++)
    {
        if (arr[j] < arr[r])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void quicksort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;

    int newPivot = pivot(arr, l, r);
    quicksort(arr, l, newPivot - 1);
    quicksort(arr, newPivot, r);
}

int main()
{
    int n; // Space Complexity: O(1)
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) // Time Complexity: O(n)
        cin >> arr[i];

    quicksort(arr, 0, n-1); // Time Complexity: O(n log n)
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << '\n';
}

// Program Space Complexity: O(n)
// Program Time Complexity: O(n log n)


