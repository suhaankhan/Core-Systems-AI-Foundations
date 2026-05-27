/*
 * @lc app=leetcode id=2114 lang=cpp
 *
 * [2114] Maximum Number of Words Found in Sentences
 */

// @lc code=start
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int max_words = 0;

        if (n == 0) {
            int words = 0;
            return words;
        }

        for (int i = 0; i < n; i++) {
            int m = sentences[i].size();
            int words = 1;

            for (int j = 0; j < m; j++) {
                if (sentences[i][j] == ' ') {
                    words++;
                }
            }

            if (words > max_words) {
                max_words = words;
            }
        }
        return max_words;
    }
};
// @lc code=end

