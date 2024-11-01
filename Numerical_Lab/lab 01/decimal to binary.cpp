/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // decimal to binary
    int n, b;
    cout << "Enter a decimal number: ";
    cin >> n;
    vector<int> bin;

    while(n != 0){
        if (n%2 == 1){
            b = 1;
        }
        else{
            b = 0;
        }
        bin.push_back(b);
        n = (n-b)/2;
    }
    cout << "Decimal to Binary: ";
    for (int i=bin.size()-1; i>=0; i--){
        cout << bin[i] ;
    }
    return 0;
}