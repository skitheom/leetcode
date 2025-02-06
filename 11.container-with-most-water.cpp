/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
  int maxArea(vector<int> &height) {
    int area = 0;
    for (size_t iLeft = 0, iRight = height.size() - 1; iLeft < iRight;) {
      int h = std::min(height[iLeft], height[iRight]);
      area = std::max(area, static_cast<int>((iRight - iLeft) * h));

      while (height[iLeft] <= h && iLeft < iRight)
        ++iLeft;
      while (height[iRight] <= h && iLeft < iRight)
        --iRight;
    }
    return area;
  }
};
// @lc code=end
