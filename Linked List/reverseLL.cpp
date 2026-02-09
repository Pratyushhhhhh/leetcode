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
private:
    ListNode* reverseLL(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* newHead=reverseLL(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newHead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* ans = reverseLL(head);
        return ans;
        // ListNode* prev=NULL;
        // ListNode* temp=head;
        // ListNode* front=NULL;
        // while(temp!=NULL)
        // {
        //     front=temp->next;
        //     temp->next=prev;
        //     prev=temp;
        //     temp=front;

        // }
        // return prev;
    }
};