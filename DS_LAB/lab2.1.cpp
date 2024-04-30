#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, indx;
    cin >> n >> indx;
    string str;
    cin >> str;

    if (indx >= n || indx < 0)
        cout << "Invalid Index" << endl;
    else
        cout << str[indx] << endl;
    return 0;
}
