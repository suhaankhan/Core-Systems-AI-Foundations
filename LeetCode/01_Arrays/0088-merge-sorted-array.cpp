/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> array(m + n);
        int i = 0, j = 0, k = 0;
        
        while (j < m && k < n) {
            if (nums1[j] <= nums2[k]) {
                array[i] = nums1[j];
                j++;
            }

            else {
                array[i] = nums2[k];
                k++;
            }

            i++;
        }

        while (j < m) {
            array[i] = nums1[j];
            j++;
            i++;
        }

        while (k < n) {
            array[i] = nums2[k];
            k++;
            i++;
        }

        nums1 = array;
    }
};
// @lc code=end

