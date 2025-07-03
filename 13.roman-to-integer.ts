/*
 * @lc app=leetcode id=13 lang=typescript
 *
 * [13] Roman to Integer
 */

// @lc code=start
function romanToInt(s: string): number {
  const isSubtract = (c: string, a1: string, a2: string): boolean => {
    return (c === a1 || c === a2);
  };

  let result = 0;
  for (let n: number = 0; n < s.length; n++) {
    const nextChar: string = s[n + 1] || '';

    switch (s[n]) {
      case 'M':
        result += 1000;
        break;
      case 'D':
        result += 500;
        break;
      case 'C':
        result += isSubtract(nextChar, 'M', 'D') ? -100 : 100;
        break;
      case 'L':
        result += 50;
        break;
      case 'X':
        result += isSubtract(nextChar, 'C', 'L') ? -10 : 10;
        break;
      case 'V':
        result += 5;
        break;
      case 'I':
        result += isSubtract(nextChar, 'X', 'V') ? -1 : 1;
        break;
    }
  }
  return result;
};
// @lc code=end
