#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string T, P, Q;
        // input with space
        getline(cin, T);
        getline(cin, P);
        getline(cin, Q);

        size_t pos = T.find(P);
        while(pos != -1)
        {
            T.replace(pos, P.length(), Q);
            pos = T.find(P, pos + Q.length());
        }
        // final output
        cout << T << endl;
    }
    return 0;
}
