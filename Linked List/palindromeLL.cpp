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
        ListNode* prev=NULL;
        ListNode* front;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp= front;
        }
        return prev;    
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast= head;
        ListNode* slow = head;
        if(head==NULL|| head->next==NULL) return true;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode * rev;
        if(fast!=NULL)
            rev=reverseLL(slow->next);
        else
            rev = reverseLL(slow);
        ListNode* ptr = head;
        while(rev!=NULL)
        {
            if(rev->val == ptr->val){
                rev=rev->next;
                ptr=ptr->next;
            }
            else
                return false;
        }
        return true;
    }
};