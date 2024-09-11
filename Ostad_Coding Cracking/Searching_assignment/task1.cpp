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
        int n, target;
        cin >> n >> target;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        // must be sorted
        sort(v.begin(), v.end());

        /*
            Binary search
                -> Time complexity: O(log n);
                -> Space complexity: O(1);
        */
        
        int l = 0, r = n - 1;
        bool flag = false;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (v[mid] == target) {
                cout << mid << endl;
                flag = true;
                break;
            }
            else if (v[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        if (!flag)
            cout << "-1" << endl;
    }
    return 0;
}
