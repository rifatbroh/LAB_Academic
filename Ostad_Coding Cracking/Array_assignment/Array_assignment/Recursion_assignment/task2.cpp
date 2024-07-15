/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int recursion (int a, int b)
{
    if (b == 0) 
        return 0;
    return a + recursion(a, b-1);
}
/*
    Time Complexity: O(b)
    Space Complexity: O(b)
    Note -> b tims adding
*/
int main()
{
    int a, b;
    cin >> a >> b;
    int res = recursion(a, b);
    cout << res << endl;
    return 0;
}