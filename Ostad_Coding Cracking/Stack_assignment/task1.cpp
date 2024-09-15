/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    
    for (auto ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if (st.empty()) {
                return false;
            }
            char tp = st.top();
            st.pop();
            if ((ch == ')' && tp != '(') ||
                (ch == '}' && tp != '{') ||
                (ch == ']' && tp != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}
/*
    Time complexity: O(n);
    Space complexity: O(n) -> worst case
*/
int main() {
    string s;
    cin >> s;

    if (isValid(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
