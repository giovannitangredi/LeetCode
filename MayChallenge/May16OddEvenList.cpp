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
        if(head==NULL)
            return NULL;
        if(head->next==nullptr)
            return head;
        ListNode* ans= new ListNode(head->val);
        ListNode* y=ans;
        ListNode* odd=new ListNode(head->next->val);
        ListNode* z=odd;
        ListNode* x=head;
        int count=2;
        x=x->next->next;
        while(x!=nullptr)
        {
            if(count%2==1 )
            {
                z->next=new ListNode(x->val);
                z=z->next;
            }
            else
            {
                y->next=new ListNode(x->val);
                y= y->next; ;
            }
            x=x->next;
            count++;
        }
        y->next=odd;
       
        return ans;
    }
};