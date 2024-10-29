#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int p = 0;

    for (size_t i = 1; i < prices.size(); ++i) {
        if (prices[i] > prices[i - 1]) {
            p += prices[i] - prices[i - 1];
        }
    }

    return p;
}
/*
    Time complextiy: O(n)
    Space complexity: O(n)
*/
int main() 
{
    vector<int> prices;
    int n, price;

    cout << "Enter the number of days: ";
    cin >> n;
    cout << "Enter the prices for each day: ";
    for (int i = 0; i < n; ++i) {
        cin >> price;
        prices.push_back(price);
    }

    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}
