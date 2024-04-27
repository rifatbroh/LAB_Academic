#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int postion, value;
    cin >> postion >> value;
    for (int i=n; i>=postion; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[postion] = value;
    for (int i=0; i<=n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}