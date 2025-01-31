/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
class Solution {
public:
  int compress(vector<char> &chars) {

    size_t n = chars.size();
    size_t indexWrite = 0;

    for (size_t indexRead = 1, count = 1; indexRead <= n;
         ++indexRead, ++count) {
      if (indexRead == n || chars[indexRead] != chars[indexRead - 1]) {
        chars[indexWrite] = chars[indexRead - 1]; // Store character
        ++indexWrite;
        if (count > 1) {
          for (char digit : to_string(count)) {
            chars[indexWrite] = digit;
            ++indexWrite;
          }
        }
        count = 0;
      }
    }
    return indexWrite;
  }
};
// @lc code=end
