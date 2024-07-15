/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int l, int r) {
    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return isPalindrome(s, l + 1, r - 1);
}
/*
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
int main() {
    string s;
    cin >> s;
    int sz = s.size();
    if (isPalindrome(s, 0, sz - 1))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}
