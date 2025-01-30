/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
class Solution {
public:
  bool increasingTriplet(vector<int> &nums) {

    int n = nums.size();

    if (n < 3)
      return false;

    int low = std::numeric_limits<int>::max();
    int mid = std::numeric_limits<int>::max();

    for (size_t i = 0; i < n; ++i) {
      if (nums[i] > mid)
        return true;
      else if (nums[i] < low) {
        low = nums[i];
      } else if (nums[i] > low && nums[i] < mid) {
        mid = nums[i];
      }
    }
    return false;
  }
};
// @lc code=end
