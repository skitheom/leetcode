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
    vector<int> copy(nums);

    size_t numsIndex = 0;
    for (size_t copyIndex = 0; copyIndex < n; copyIndex++) {
      if (copy[copyIndex] == 0) {
        continue;
      }
      nums[numsIndex] = copy[copyIndex];
      numsIndex++;
    }

    for (size_t i = numsIndex; i < n; i++) {
      nums[i] = 0;
    }
  }
};

// @lc code=end
