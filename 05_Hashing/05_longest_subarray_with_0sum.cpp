#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long subarraySum(vector<int>& nums, int target) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        }

        long long count = 0;

        /*
         * Generate every possible subarray
         * using its start and end indices.
         */
        for (int start = 0; start < n; start++) {
            for (int end = start; end < n; end++) {
                long long currentSum = 0;

                // Calculate the complete sum of this range.
                for (int index = start; index <= end; index++) {
                    currentSum += nums[index];
                }

                // This range is valid when its sum equals target.
                if (currentSum == target) {
                    count++;
                }
            }
        }

        return count;
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 2};
    int target = 3;

    Solution solution;
    cout << solution.subarraySum(nums, target) << endl;

    return 0;
}