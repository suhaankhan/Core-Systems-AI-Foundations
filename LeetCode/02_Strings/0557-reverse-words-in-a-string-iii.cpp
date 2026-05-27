/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        int word_start = 0;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ' || i == n - 1) {
                
                int left = word_start;
                int right = (s[i] == ' ') ? i - 1 : i;
                
                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
                word_start = i + 1;
            }
        }  
        return s;
    }
};
// @lc code=end

