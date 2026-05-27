/*
 * @lc app=leetcode id=1512 lang=cpp
 *
 * [1512] Number of Good Pairs
 */

// @lc code=start
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        
        if (n < 2) {
            return 0;
        }

        int good_pairs = 0;
        for (int i = 0; i < n; i++) {
            for (int j = (i + 1); j < n; j++) {
                if (nums[i] == nums[j]) {
                    good_pairs++;
                }
            }
        }
        return good_pairs;
    }
};
// @lc code=end

