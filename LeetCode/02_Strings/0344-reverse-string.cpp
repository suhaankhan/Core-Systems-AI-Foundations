/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();

        for (int i = 0; i < (n/2); i++) {
            char letter;
            
            letter = s[i];
            s[i] = s[n - 1 - i];
            s[n - 1 -i] = letter;
        }
    }
};
// @lc code=end

