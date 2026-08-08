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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *x = list1, *y = list1;
        for (int i = 0; i <a -1; i++){ 
            x = x->next;
        }    
        for (int i = 0; i < b; i++){ 
            y = y->next;
        }    
        ListNode *end = list2;
        while (end->next){ 
            end = end->next;
        }
        x->next = list2;
        end->next = y->next;
        return list1;
    }
};