/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {

public:
  string reverseWords(string s) {
    if (s.size() == 0) {
      return s;
    }

    string res;

    for (size_t wordEnd = s.find_last_not_of(" ", s.size() - 1);
         wordEnd != string::npos;) {
      size_t blankStart = s.find_last_of(" ", wordEnd);
      if (blankStart == std::string::npos) {
        res += s.substr(0, wordEnd + 1);
        break;
      }
      res += s.substr(blankStart + 1, wordEnd - blankStart);
      wordEnd = s.find_last_not_of(" ", blankStart);
      if (wordEnd != string::npos) {
        res += " ";
      }
    }
    return res;
  }
};
// @lc code=end
