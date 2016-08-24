/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* odd = head;
        ListNode* even = head->next;

        ListNode* first_even = even;

        while(odd->next && even->next){
        	odd->next = even->next;
        	odd = odd->next;
        	even->next = odd->next;
        	even = even->next;
        }
        odd->next = first_even;

        return head;
    }
};