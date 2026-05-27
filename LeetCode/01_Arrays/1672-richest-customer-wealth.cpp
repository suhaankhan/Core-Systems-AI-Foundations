/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        int m = accounts.size();

        for (int i = 0; i < m; i++) {
            int current_wealth = 0;
            int n = accounts[i].size();
            
            for (int j = 0; j < n; j++) {
                current_wealth += accounts[i][j];
            }
            
            if (current_wealth > wealth) {
                wealth = current_wealth;
            }
        }
        
        return wealth;
    }
};
// @lc code=end

