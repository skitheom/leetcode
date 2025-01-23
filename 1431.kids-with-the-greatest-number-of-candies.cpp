/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
class Solution {
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {

    vector<bool> res;

    auto it = max_element(candies.begin(), candies.end());
    int maxCandies = *it;
    for (int i = 0; i < candies.size(); i++) {
      if (candies[i] + extraCandies < maxCandies) {
        res.push_back(false);
      } else {
        res.push_back(true);
      }
    }
    return res;
  }
};
// @lc code=end
