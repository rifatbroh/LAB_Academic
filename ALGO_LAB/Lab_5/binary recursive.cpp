/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

bool binary_recursive(vector<int>& v, int k, int l, int r) {
    if (l > r)
        return false;

    int mid = (l + r) / 2;
    if (v[mid] == k)
        return true;
    else if (v[mid] < k)
        return binary_recursive(v, k, mid + 1, r);
    else
        return binary_recursive(v, k, l, mid - 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int k;
    cout << "I want to find: ";
    cin >> k;

    int l = 0, r = n - 1;
    bool found = binary_recursive(v, k, l, r);
    if (found)
        cout << "Element Found" << endl;
    else
        cout << "Element Not Found" << endl;
    return 0;
}
