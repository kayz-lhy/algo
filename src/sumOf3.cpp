#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {
    int len = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < len; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int k = len - 1;
        for (int j = i + 1; j < len; j++) {

            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }
            while (j < k && nums[j] + nums[k] > -nums[i]) {
                k--;
            }
            if (j == k) {
                break;
            }
            if (nums[j] + nums[k] == -nums[i]) {
                res.push_back({nums[i], nums[j], nums[k]});
            }
        }
    }
    return res;
}

int main() {
    vector<int> vec({-1, 0, 1, 0});
    vector<vector<int>> res = threeSum(vec);
    for (const auto &i: res) {
        for (auto j: i) {
            cout << j << endl;
        }
    }
}
