/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
bool Is_even(string s)
{
    int digit = s[s.size()-1]-'0';
    return (digit%2 == 0);
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        if (Is_even(s))
            cout<< "even"<<endl;
        else
            cout<< "odd"<<endl;
    }
    return 0;
}