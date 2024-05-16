#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Bubble Sort algorithm
    for (int j = 1; j < n; j++)
        {
        int k = 0;
        while (k < n - j) {
            if (a[k] > a[k + 1]) {
                // Swap DATA[PTR] and DATA[PTR + 1]
                int temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
            k++;
        }
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
