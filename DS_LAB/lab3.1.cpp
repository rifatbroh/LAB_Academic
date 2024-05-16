#include<bits/stdc++.h>
using namespace std;

int Pattern(const string &P, const string &T) {
    int R = P.length();
    int S = T.length();
    int K = 0;
    int MAX = S - R + 1;

    while (K <= MAX) {
        int L;
        for (L = 0; L < R; L++) {
            if (P[L] != T[K + L])
                break;
        }
        if (L == R) {
            return K;
        }
        K++;
    }
    return -1;
}

int main()
{
    string P, T;
    cout << "Enter the pattern string P: ";
    getline(cin, P);
    cout << "Enter the text string T: ";
    getline(cin, T);

    int index = Pattern(P, T);

    if (index != -1)
        cout << "Pattern found at index " << index << endl;
    else
        cout << "Pattern not found" << endl;
    return 0;
}
