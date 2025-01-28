/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
  double findMaxAverage(vector<int> &nums, int k) {

    double maxAve = std::numeric_limits<int>::min();
    long long curSum = 0;

    for (int i = 0; i < k; ++i) {
      curSum += nums[i];
    }
    maxAve = std::max(maxAve, (double)curSum / k);

    for (int i = k; i < nums.size(); ++i) {
      curSum -= nums[i - k];
      curSum += nums[i];
      maxAve = std::max(maxAve, (double)curSum / k);
    }
    return maxAve;
  }
};
// @lc code=end
