/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, truck;
    cin >> n >> truck;
    vector<vector<int>> box(n);
    for (int i = 0; i < n; i++) {
        int n_b, u_b;
        cin >> n_b >> u_b;
        box[i] = {n_b, u_b};
    }

    /*
        Input:
        3 4
        1 3
        2 2
        3 1

        Output:
        8

    */
    sort(box.begin(), box.end(), [](vector<int>& a, vector<int>& b) {
        return a[1] > b[1];
    });

    /*
        Time complexity: O (n log n);
        Space complexity: O (n);
    */
    int maxUnits = 0;
    for (auto box : box) {
        int boxes = min(truck, box[0]);
        maxUnits += boxes * box[1];
        truck -= boxes;
        if (truck == 0) break;
    }

    cout << maxUnits << endl;

    return 0;
}
