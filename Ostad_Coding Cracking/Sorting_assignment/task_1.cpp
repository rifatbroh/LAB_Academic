/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int l=0, r=v.size() - 1;

    while (true)
    {
        int track = v[r];
        int i = l;

        for (int j = l; j < r; j++) {
            if (v[j] > track) {
                swap(v[i], v[j]);
                i++;
            }
        }
        swap(v[i], v[r]);

        if (i == k - 1) {
            cout << v[i] << endl;
            break;
        } else if (i < k - 1)
            l = i + 1;
        else
            r = i - 1;
    }
    return 0;
}
