/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
  bool isSubsequence(string s, string t) {

    size_t sIndex = 0;
    for (size_t tIndex = 0; sIndex < s.size(), tIndex < t.size();) {

      if (s[sIndex] == t[tIndex]) {
        sIndex++;
      }
      tIndex++;
    }
    return (sIndex == s.size());
  }
};
// @lc code=end
