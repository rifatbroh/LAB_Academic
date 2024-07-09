/*
    MD Rifat Hossain
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

/*
    Time complexity: O(n)
    space complexity:O(1)
    for best case
*/

int found(string haystack, string needle) {
    int pos = haystack.find(needle);
    if (pos != string::npos)
        return pos;
    else
        return -1;
}

int main() {
    string haystack, needle;
    cin >> haystack >> needle;

    int ans = found(haystack, needle);
    cout << ans << endl;
    return 0;
}
