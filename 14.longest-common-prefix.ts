/*
 * @lc app=leetcode id=14 lang=typescript
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
function longestCommonPrefix(strs: string[]): string {
  if (strs.length === 0) return '';

  strs.sort();
  let prefix = strs[0];
  while (strs[strs.length - 1].indexOf(prefix) !== 0) {
    prefix = prefix.slice(0, prefix.length - 1);
    if (prefix === '') return '';
  }
  return prefix;
};
// @lc code=end
