#include <bits/stdc++.h>
using namespace std;

int main() {

    /* FOR LOOP */
    for (int i = 0, j = 1; i < 10000;)
    {
        cout << i << " ";
        int temp = i + j;
        i = j;
        j = temp;
    }

    return 0;
}
