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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd=head;
        if(head ==NULL || head->next==NULL) return head; //VERY IMPORTANT
        ListNode* even=head->next;
        ListNode* even_start=even;
        while(even!=NULL && even->next!=NULL)//even->next!=NULL IMP Otherwise RTE
        {
            odd->next=even->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=even_start;
        return head;
    }
};