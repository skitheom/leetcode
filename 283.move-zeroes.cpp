/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
  void moveZeroes(vector<int> &nums) {

    size_t n = nums.size();
    size_t indexToCopy = 0;
    size_t indexCopyFrom = 0;

    while (indexCopyFrom < n) {
      if (nums[indexCopyFrom] != 0) {
        nums[indexToCopy] = nums[indexCopyFrom];
        indexToCopy++;
      }
      indexCopyFrom++;
    }

    while (indexToCopy < n) {
      nums[indexToCopy] = 0;
      indexToCopy++;
    }
  }
};

// @lc code=end
