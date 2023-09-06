/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>

// struct ListNode{
//     int val;
//     struct ListNode *next;
// };

struct ListNode *createNode(void) {
    struct ListNode *new_node =
        (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = 0;
    new_node->next = NULL;
    return new_node;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {

    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;
    struct ListNode *ret = p1;
    while (1) {
        if (p1->val + p2->val >= 10) {
            p1->val = p1->val + p2->val - 10;
            if (p1->next == NULL) {
                p1->next = createNode();
                p1->next->val = 1;
            } else {
                p1->next->val += 1;
            }
        } else {
            p1->val = p1->val + p2->val;
        }
        if (p1->next == NULL && p2->next == NULL) {
            break;
        } else if (p1->next != NULL && p2->next == NULL) {
            p2->next = createNode();
        } else if (p1->next == NULL && p2->next != NULL) {
            p1->next = createNode();
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    return ret;
}
// @lc code=end
