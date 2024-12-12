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
        ListNode* ans = new ListNode();///非称み氮
        ListNode* now = ans;///瞷璶矪瞶 Node
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr){///р list1 常狡籹 ans  now 柑
            if(l1==nullptr){///オΤ狥﹁
                int here = l2->val + carry;
                carry = here / 10;
                now->next = new ListNode(here%10);///穝非称
                now = now->next;///传掸
                l2 = l2->next;
            }else if(l2==nullptr){///オΤ狥﹁
                int here = l1->val + carry;
                carry = here / 10;
                now->next = new ListNode(here%10);///穝非称
                now = now->next;///传掸
                l1 = l1->next;///传掸
            }else{///常Τ
               int here = l1->val + l2->val + carry;
                carry = here / 10;
                now->next = new ListNode(here%10);///穝非称
                now = now->next;///传掸
                l1 = l1->next;///传掸
                l2 = l2->next;
            }
            if(carry>0) now->next = new ListNode(carry);
        }
        return ans->next;
    }
};
