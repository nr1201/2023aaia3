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
        ListNode* ans = new ListNode(0);///�ť]�u�A�U�@���~�O�u������
        ListNode* now = ans;
        while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr){///����O�Ū�
                now->next = list2;///�N��k������U
                break;
            }else if(list2==nullptr){///�k��O�Ū�
                now->next = list1;///�N�⥪������U
                break;
            }else if(list1->val < list2->val){///list1����p
                now->next = new ListNode(list1->val);///�p����J
                list1 = list1->next;///���U�@��
                now = now->next;///���ײ{�b�]���U�@��
            }else{///list2����p
                now->next = new ListNode(list2->val);///�p����J
                list2 = list2->next;///���U�@��
                now = now->next;///���ײ{�b�]���U�@��
            }
        }
        return ans->next;///ans�O�ť]�u�A�U�@���~�O�u������
    }
};
