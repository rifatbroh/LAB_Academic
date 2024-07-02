#include<bits/stdc++.h>
using namespace std;

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

int maxProfit(vector<int>& a) {
    if (a.empty()) return 0;

    int minPrice = a[0];
    int Profit = 0;

    for (int i = 1; i < a.size(); i++) {
        if (a[i] < minPrice)
            minPrice = a[i];
        else
            Profit = max(Profit, a[i] - minPrice);
    }
    return Profit;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int result = maxProfit(a);
    cout << result << endl;

    return 0;
}
