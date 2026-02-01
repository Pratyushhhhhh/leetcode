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
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
        // ListNode* prev=node;
        // ListNode* ahead=node->next;
        // while(prev->next!=nullptr){
        //     if(ahead->next==nullptr)
        //     {
        //         prev->val=ahead->val;
        //         prev->next=nullptr;
        //         break;
        //     }
        //     else{
        //         prev->val=ahead->val;
        //     }
        //     prev=ahead;
        //     ahead=ahead->next;
        // }
    }
};