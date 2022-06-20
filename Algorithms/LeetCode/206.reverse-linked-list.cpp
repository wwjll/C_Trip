/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // Recursion
    // ListNode* reverseList(ListNode* head, ListNode* prev = nullptr) {
    //     if(!head) { return prev; }
    //     ListNode* next = head->next;
    //     head->next = prev;
    //     return reverseList(next, head);
    // }
    // Non Recursion
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr, *next;
        while(head)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};
// @lc code=end

