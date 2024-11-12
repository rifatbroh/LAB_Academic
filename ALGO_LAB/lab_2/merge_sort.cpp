/*
    MD Rifat Hossain
    Country: Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& v, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = v[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = v[mid + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            v[k] = left[i];
            i++;
        } else {
            v[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int>& v, int l, int r)
{
    if (l >= r)
        return;

    int mid = l + (r - l) / 2;
    merge_sort(v, l, mid);
    merge_sort(v, mid + 1, r);

    merge(v, l, mid, r);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    merge_sort(v, 0, n - 1);
    cout << "After sorting, the array is: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
