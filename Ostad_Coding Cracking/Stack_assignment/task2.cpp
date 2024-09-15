/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    stack<char> st;
    /*
        Time complexity: O(n);
        Space complexity: O(1);
    */
    for(auto ch : s) {
        if (!st.empty() && st.top() == ch) {
            // if same char
            st.pop();
        }else {
            st.push(ch);
        }
    }
    string s2;
    while(!st.empty()) {
        // add in new string 
        s2 += st.top();
        st.pop();
    }
    // because last in fast out (LIFO);
    reverse(s2.begin(), s2.end());
    cout << s2 << endl;

    return 0;
}