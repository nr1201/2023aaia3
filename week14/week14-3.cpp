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
        ListNode* ans = new ListNode();///�ǳƦn�ߪ�����
        ListNode* now = ans;///�{�b�n�B�z�� Node
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr){///�� list1 ���ƻs�� ans �� now ��
            if(l1==nullptr){///���šB�k���F��
                int here = l2->val + carry;
                carry = here / 10;
                now->next = new ListNode(here%10);///�s�ǳƤ@�ӭ�
                now = now->next;///���U�@��
                l2 = l2->next;
            }else if(l2==nullptr){///�k�šB�����F��
                int here = l1->val + carry;
                carry = here / 10;
                now->next = new ListNode(here%10);///�s�ǳƤ@�ӭ�
                now = now->next;///���U�@��
                l1 = l1->next;///���U�@��
            }else{///����
               int here = l1->val + l2->val + carry;
                carry = here / 10;
                now->next = new ListNode(here%10);///�s�ǳƤ@�ӭ�
                now = now->next;///���U�@��
                l1 = l1->next;///���U�@��
                l2 = l2->next;
            }
            if(carry>0) now->next = new ListNode(carry);
        }
        return ans->next;
    }
};
