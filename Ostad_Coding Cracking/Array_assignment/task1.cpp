#include <bits/stdc++.h>
using namespace std;

/*
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

vector<int> Sum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    // no solutin found
    return {};
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<int> v = Sum(nums, target);
    if (!v.empty())
        cout << v[0] << " " << v[1] << endl;
    else
        cout << "Not found!" << endl;
    return 0;
}
