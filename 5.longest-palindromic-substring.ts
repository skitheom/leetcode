/*
 * @lc app=leetcode id=5 lang=typescript
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
function longestPalindrome(s: string): string {
  if (s.length < 2) return s;

  const isPalindromic = (s: string): boolean => {
    let l = 0, r = s.length - 1;
    while (l < r) {
      if (s[l] !== s[r]) return false;
      l++;
      r--;
    }
    return true;
  };

  let result: string = s.slice(0, 1);
  for (let start = 0; start < s.length; ++start) {
    const ch = s[start];
    let idx = s.lastIndexOf(ch);

    while (start < idx) {
      const tmpSubstr = s.slice(start, idx + 1);
      if (isPalindromic(tmpSubstr)) {
        result = (result.length < tmpSubstr.length) ? tmpSubstr : result;
        break;
      }
      idx = s.lastIndexOf(ch, idx - 1);
    }
  }

  return result;
};
// @lc code=end


/*
function longestPalindrome(s: string): string {
  if (s.length < 2) return s;

  let start = 0;
  let end = 0;

  const expand = (left: number, right: number): void => {
    while (left >= 0 && right < s.length && s[left] === s[right]) {
      left--;
      right++;
    }
    // 終了時には1つ余計に広がってるので -1 する
    if (right - left - 1 > end - start) {
      start = left + 1;
      end = right - 1;
    }
  };

  for (let i = 0; i < s.length; i++) {
    expand(i, i);     // 奇数長中心
    expand(i, i + 1); // 偶数長中心
  }

  return s.slice(start, end + 1);
}
*/
