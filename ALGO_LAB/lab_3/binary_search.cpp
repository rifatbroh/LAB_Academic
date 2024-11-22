#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];

    int l = 0, r = n-1;
    while(l <= r){
        int mid = (l+r)/2;

        if (a[mid] == k){

            cout << "Element found" << endl;
            return 0;
        }
        else if (k > a[mid])
            l = mid+1;
        else
            r = mid-1;
    }
    cout << "Element not found" << endl;
    return 0;
}