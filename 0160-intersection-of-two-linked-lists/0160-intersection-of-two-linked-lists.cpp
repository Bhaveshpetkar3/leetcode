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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        int l1=1,l2=1;
        if(h1==h2)return h1;
        bool flag=true;
        ListNode *n1=h1;
        ListNode *n2=h2;
        while(n1 and n1->next)
        {
            l1+=2;
            n1=n1->next->next;
        }
        if(!n1)l1--;
        while(n2 and n2->next)
        {
            l2+=2;
            n2=n2->next->next;
        }
        if(!n2)l2--;
        //if(h1->next==NULL and h2->next==NULL)return NULL;
        int tgt=abs(l2-l1);
        cout<<tgt<<" "<<l2<<" "<<l1;
        if(tgt)
        {
            ListNode* t;
            if(l2>l1)
            {
                t=h2;
            }
            else  t=h1;
            for(int i=0;i<tgt;i++)t=t->next;
            if(l2>l1)h2=t;
            else h1=t;
        }      
        //cout<<h1->val<<" "<<h2->val;
        while(h1 and h2 and h1!=h2)
        {
            h1=h1->next;
            h2=h2->next;
        }
        //if(!h1 or !h2)return NULL;
        if(h1==h2)return h1;
        return NULL;
    }
};