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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseLL(l1);
        l2 = reverseLL(l2);
        int sum=0, carry=0;
        ListNode* curr = new ListNode();
        while(l1!=NULL || l2!=NULL)
        {   
            sum = carry;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            curr->val = sum%10;
            carry =a sum/10;
            ListNode* newNode= new ListNode(carry);
            newNode->next = curr;
            curr = newNode;
        }
        if(carry == 0)
            return curr->next;
        return curr;
    }
};
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         // l1 = reverseLL(l1);
//         // l2 = reverseLL(l2);
//         stack<int>s1,s2;
//         while(l1){
//             s1.push(l1->val);
//             l1=l1->next;
//         }
//         while(l2){
//             s2.push(l2->val);
//             l2=l2->next;
//         }
//         int sum=0, carry=0;
//         ListNode* curr = new ListNode();
//         while(!s1.empty() || !s2.empty())
//         {   
//             sum = carry;
//             if(!s1.empty()){
//                 sum+=s1.top();
//                 s1.pop();
//             }
//             if(!s2.empty()){
//                 sum+=s2.top();
//                 s2.pop();
//             }
//             curr->val = sum%10;
//             carry = sum/10;
//             ListNode* newNode= new ListNode(carry);
//             newNode->next = curr;
//             curr = newNode;
//         }
//         if(carry == 0)
//             return curr->next;
//         return curr;
//     }
// };