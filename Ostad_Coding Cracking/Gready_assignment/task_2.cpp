/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;
/*
    Input:
    4
    1 4
    2 3
    4 6
    8 9

    Output:
    3

*/
/*
    Time complexity: O (n log n);
    Space complexity: O (n);
*/
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second;
    });

    int cnt = 0, val = -1;

    for (int i = 0; i < n; i++) {
        if (v[i].first > val) {
            cnt++;
            val = v[i].second;
        }
    }

    cout << cnt << endl;
    return 0;
}
