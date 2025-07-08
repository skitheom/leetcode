/*
 * @lc app=leetcode id=128 lang=typescript
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
function longestConsecutive(nums: number[]): number {
  nums.sort();
  const numSet = new Set(nums);
  let maxLen = 0;

  for (const num of numSet) {
    if (!numSet.has(num - 1)) {
      let current = num;
      let streak = 1;

      while (numSet.has(current + 1)) {
        current += 1;
        streak += 1;
      }

      maxLen = Math.max(maxLen, streak);
    }
  }

  return maxLen;
};
// @lc code=end
