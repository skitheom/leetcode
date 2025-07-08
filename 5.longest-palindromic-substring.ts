/*
 * @lc app=leetcode id=5 lang=typescript
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
function longestPalindrome(s: string): string {
  if (s.length < 2) return s;

  let start = 0;
  let end = 0;

  const expandPalindrome = (l: number, r: number): void => {
    while (l >= 0 && r < s.length && s[l] === s[r]) {
      l--;
      r++;
    }
    if (r - l - 1 > end - start) {
      start = l + 1;
      end = r - 1;
    }
  };
  for (let i = 0; i < s.length; i++) {
    expandPalindrome(i, i);
    expandPalindrome(i, i + 1);
  }
  return s.slice(start, end + 1);
};
// @lc code=end
