/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n);
        int org_max_candies = 0;

        for (int i = 0; i < n; i++) {
            if (candies[i] > org_max_candies) {
                org_max_candies = candies[i];
            }
        }

        for (int i = 0; i < n; i++) {
            result[i] = ((candies[i] + extraCandies) >= org_max_candies);
        }
        return result;
    }
};
// @lc code=end

