/*
 * @lc app=leetcode id=9 lang=typescript
 *
 * [9] Palindrome Number
 */

// @lc code=start
function isPalindrome(x: number): boolean {
  if (x < 0) return false;

  const original = x;
  let reversed = 0;

  while (x > 0) {
    const digit = x % 10;
    reversed = reversed * 10 + digit;
    // x = Math.floor(x / 10);
    x = (x / 10) | 0;  // 負の数だと結果がfloorと変わるため注意
  }
  return original === reversed;
};
// @lc code=end
