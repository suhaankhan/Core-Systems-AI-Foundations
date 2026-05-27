/*
 * @lc app=leetcode id=1470 lang=cpp
 *
 * [1470] Shuffle the Array
 */

// @lc code=start
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n);

        if (n == 0) {
            return nums;
        }

        for (int i = 0; i < n; i++) {
            result[i*2] = nums[i];
            result[(i*2) + 1] = nums[n + i];
        }
        
        return result;
    }
};
// @lc code=end

