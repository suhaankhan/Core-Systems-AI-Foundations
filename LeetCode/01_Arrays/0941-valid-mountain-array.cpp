/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) {
            return false;
        }

        bool isClimbing = true;

        for (int i = 0; (i < arr.size() - 1); i++) {
            if (isClimbing) {
                if (arr[i] < arr[i + 1]) {
                    continue;
                }

                else if (arr[i] == arr[i + 1]) {
                    return false;
                }

                else {
                    if (i == 0) return false;
                    isClimbing = false;
                }
            }

            else {
                if (arr[i] > arr[i + 1]) {
                    continue;
                }
                
                else {
                    return false;
                }
            }
        }

        return !isClimbing;
    }
};
// @lc code=end

