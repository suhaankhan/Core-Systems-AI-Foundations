/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> result(n);

        for (int i = 0; i < k; i++) {
            result[i] = nums[n - k + i];
        }

        for (int i = 0; i < (n - k); i++) {
            result[k + i] = nums[i];
        }

        for (int i = 0; i < n; i++) {
            nums[i] = result[i];
        } 
    }
};
// @lc code=end

