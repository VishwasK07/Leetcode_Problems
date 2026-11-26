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
    ListNode* middleNode(ListNode* head) {
        ListNode* mover = head;
        int n = 0;
        while (mover != NULL) {
            mover = mover->next;
            n++;
        }
        n = n / 2;
        mover = head;
        while (n != 0) {
            mover = mover->next;
            n--;
        }
        return mover;
    }
};
// Brute force approach