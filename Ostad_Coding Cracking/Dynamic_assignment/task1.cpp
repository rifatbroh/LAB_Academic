#include <iostream>
#include <vector>

using namespace std;

/*
 * MD Rifat Hossain
 * Bangladesh
 */

int climbStairs(int n) {
    if (n <= 2) return n;

    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2; 

    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n]; 
}
/*
    Time complexity: o(n)
    space complexity: O(n)
*/
int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    cout << "Number of distinct ways to climb to the top: " << climbStairs(n) << endl;
    return 0;
}
