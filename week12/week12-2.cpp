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
        ///(1)ListNode* ans  = list1; 亂接到list1
        ///(2)ListNode* ans = new ListNode(99); 新增值是99
        ListNode* ans = new ListNode(99, new ListNode(88));///(3)新增1個值是99且右邊又新增1個值是88
        return ans;///練習認識資料結構 struct 相關的操作
    }
};
