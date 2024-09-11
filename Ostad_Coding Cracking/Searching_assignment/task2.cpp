/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];

        /*
            Binary Search
                -> Time complexity: O(log n);
                -> Space complexty: O(1);
        */

        int l=0, r=n-1;
        while(l <= r){
            int mid = (l+r)/2;

            if (v[mid] > v[r]){
                l = mid+1;
            }
            else
                r = mid-1;
        }
        cout << v[l] << endl;
    }
    return 0;
}