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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode();
        ListNode *curr=ans;
        int c=0,a;
        while(l1 || l2 || c)
        {
            int cursum=0;
            if(l1)
            {
                cursum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                cursum+=l2->val;
                l2=l2->next;
            }
            cursum+=c;
            c=cursum/10;
            a=cursum%10;
            ListNode *qwe = new ListNode(a);
            curr->next=qwe;
            curr=curr->next;
            continue;
        }
        return ans->next;
    }
};