/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_water = 0;
        int i = 0, j = (n - 1);

        while (i < j) {
            int base = (j - i);
            int current_height = min(height[i], height[j]);
            int area = base * current_height;

            if (area > max_water) {
                max_water = area;
            }

            height[i] > height[j] ? j-- : i++;
        }
        return max_water;
    }
};
// @lc code=end

