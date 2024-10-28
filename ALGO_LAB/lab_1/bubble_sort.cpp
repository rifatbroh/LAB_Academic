/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    /*
        Time complexity : O(n^n)
        Space complexity : O(1)
    */

    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    return 0;
}