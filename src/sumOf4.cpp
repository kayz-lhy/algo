#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, long long target)
{

    int len = (int)(nums.size());
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int i, j, x, y;
    for (i = 0; i < len; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        for (j = i + 1; j < len; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
            {
                continue;
            }
            for (x = j + 1; x < len; x++)
            {
                if (x > j + 1 && nums[x] == nums[x - 1])
                {
                    continue;
                }
                y = len - 1;
                while (x < y && ((long long)nums[x] + (long long)nums[y] + (long long)nums[i] + (long long)nums[j]) > target)
                {
                    y--;
                }
                if (x == y)
                {
                    break;
                }
                if ((((long long)nums[x] + (long long)nums[y] + (long long)nums[i] + (long long)nums[j]) == (long long)target))
                {
                    res.push_back({nums[i], nums[j], nums[x], nums[y]});
                }
            }
        }
    }
    return res;
}

int main()
{
    vector<int> test{1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<vector<int>> rst = fourSum(test, 4000000000);
    for (auto i : rst)
    {
        for (auto j : i)
        {
            cout << j << endl;
        }
        cout << endl;
    }
}