/*
 * @lc app=leetcode id=1108 lang=cpp
 *
 * [1108] Defanging an IP Address
 */

// @lc code=start
class Solution {
public:
    string defangIPaddr(string address) {
        int n =  address.size();
        std::string ans = "";

        if (n == 0) {
            return address;
        }

        for (int i = 0; i < n; i++) {

            if (address[i] != '.') {
                ans += address[i];
            }

            else {
                ans += "[.]";
            }
        }

        return ans;
    }
};
// @lc code=end

