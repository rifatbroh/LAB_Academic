/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
void permute(string &s, int l, int r, vector<string> &result) {
    if (l == r) {
        result.push_back(s);
    } else {
        for (int i = l; i <= r; i++) {
            swap(s[l], s[i]);
            permute(s, l + 1, r, result);
            swap(s[l], s[i]);
        }
    }
}
/*
    Time complexity: O (n!);
    Space complexity: O (n!);
*/
vector<string> per(string s) {
    vector<string> result;
    permute(s, 0, s.size() - 1, result);
    return result;
}

int main()
{
    string s;
    cin >> s;
    
    vector<string> p = per(s);
    for (auto perm : p) {
        cout << perm << " ";
    }

    return 0;
}
