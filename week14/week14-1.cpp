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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();///準備好心的答案
        ListNode* now = ans;///現在要處理的 Node
        while(l1 != nullptr){///把 list1 都複製到 ans 的 now 裡
            now->next = new ListNode(l1->val);///新準備一個值
            now = now->next;///換下一筆
            l1 = l1->next;///換下一筆
        }
        return ans->next;
    }
};
