/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // binary to decimal
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int decimal = 0, base = 1;

    for (int i=binary.size()-1; i>=0; i--){
        if (binary[i] =='1'){
            decimal += base;
        }
        base *= 2;
    }
    cout << "Binary to Decimal: " << decimal;
    
    return 0;
}