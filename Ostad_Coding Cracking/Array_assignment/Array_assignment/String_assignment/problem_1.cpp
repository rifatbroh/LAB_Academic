/*
    MD Rifat Hossain
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

/*
    Time complexity: O(n)
    space complexity: O(n)
*/

string shuffled(string s, vector<int>& a) {
    int sz = s.size();
    string shuffled(sz, ' '); // Initialize with spaces
    for (int i = 0; i < sz; i++) {
        shuffled[a[i]] = s[i];
    }
    return shuffled;
}

int main() {
    string s;
    cin >> s;
    int sz = s.size();
    vector<int> a(sz);
    for (int i = 0; i < sz; i++) cin >> a[i];

    string ss = shuffled(s, a);
    cout << ss << endl;
    return 0;
}
