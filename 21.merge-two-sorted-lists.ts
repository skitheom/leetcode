/*
 * @lc app=leetcode id=21 lang=typescript
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */
class ListNode {
  val: number;
  next: ListNode|null;

  constructor(val: number = 0, next: ListNode|null = null) {
    this.val = val;
    this.next = next;
  }
}

function mergeTwoLists(list1: ListNode|null, list2: ListNode|null): ListNode|
    null {
  const dummyHead = new ListNode(0);
  let tmp = dummyHead;
  while (list1 !== null && list2 !== null) {
    if (list1.val < list2.val) {
      tmp.next = list1;
      list1 = list1.next;
    } else {
      tmp.next = list2;
      list2 = list2.next;
    }
    tmp = tmp.next;
  }
  // short-circuit evaluation 短絡評価 と呼ぶみたい
  tmp.next = list1 || list2;
  return dummyHead.next;
};
// @lc code=end
