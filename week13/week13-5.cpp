///�ǲ߭p�e Linked List ��1�D
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();///�ǳƤ@�ӷs�� ListNode �n�񵪮�
        ListNode* now = ans;///�|���ʪ��p����
        while(list1 != nullptr || list2 != nullptr){///�u�n���F��
            if(list1==nullptr){///����ŤF�A���k��
                now->next = list2;///���W�k��
                list2 = nullptr;///�k�䶶��M��
            }else if(list2==nullptr){///�k��ŤF�A������
                now->next = list1;///���W����
                list1 = nullptr;///���䶶��M��
            }else if(list1->val < list2->val){///���䳣���ȡA�N�n��j�p�A�p����i����
                now->next = new ListNode(list1->val);///�p����i����
                list1 = list1->next;
            }else{
                now->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            now = now->next;
        }
        return ans->next;
    }
};
