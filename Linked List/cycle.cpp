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
    ListNode *detectCycle(ListNode *head) {
       if(!head || !head->next)return nullptr;
       ListNode * ptr=head;
       ListNode * s = head;
       ListNode * f = head;

       while(f && f->next)
       {
        s=s->next;
        f=f->next->next;
        if(s==f) break;
       } 
       if(s!=f) return nullptr;
       while(ptr!=s)
       {
        ptr=ptr->next;
        s=s->next;
       }
       return ptr;
    }
};