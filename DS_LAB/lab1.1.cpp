#include<bits/stdc++.h>
using namespace std;

int main ()
{
    // problem 01
    string s1,s2;
    cin >> s1 >> s2;
    int flag = 1;
    for (int i=0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 0;
        }
    }
    if (flag == 0)
        cout << "Not same" << endl;
    else
        cout << "Same" << endl;
    return 0;
}