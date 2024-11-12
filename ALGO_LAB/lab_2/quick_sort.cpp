/*
    MD Rifat Hossain
    Country: Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& v, int l, int r)
{
    int pivot = v[r];
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (v[j] < pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[r]);
    return i + 1;
}

void quick_sort(vector<int>& v, int l, int r)
{
    if (l < r) {
        int pi = partition(v, l, r);
        quick_sort(v, l, pi - 1);
        quick_sort(v, pi + 1, r);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    quick_sort(v, 0, n - 1);
    cout << "After sorting, the array is: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
