/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int n = nums.size();

        if (n == 0) {
            return 0;
        }

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[k]) {
                ++k;
                nums[k] = nums[i];
            }
        }

        return (k + 1);
    }
};
// @lc code=end

