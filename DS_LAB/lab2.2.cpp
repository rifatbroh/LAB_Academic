#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string T, P;
        getline(cin, T);
        getline(cin, P);

        size_t pos = T.find(P);
        while(pos != -1)
        {
            T.erase(pos, P.length());
            pos = T.find(P);
        }
        // final output
        cout << T << endl;
    }
    return 0;
}