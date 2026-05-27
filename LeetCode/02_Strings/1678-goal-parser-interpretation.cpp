/*
 * @lc app=leetcode id=1678 lang=cpp
 *
 * [1678] Goal Parser Interpretation
 */

// @lc code=start
class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string result = "";

        result.reserve(n);

        for (int i = 0; i < n;) {
            if (command[i] == 'G') {
                result += 'G';
                i++;
            }
            
            else if (command[i] == '(' && command[i + 1] == ')') {
                result += 'o';
                i += 2;
            }

            else {
                result += "al";
                i += 4;
            }
        }
        
        return result;
    }
};
// @lc code=end

