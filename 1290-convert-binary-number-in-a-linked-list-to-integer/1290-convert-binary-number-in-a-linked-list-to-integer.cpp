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
    int getDecimalValue(ListNode* head) {
        string ans="";
        int ans1=0,j=0;
        while(head!=NULL)
        {
            ans+=to_string(head->val);
            head=head->next;
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(ans[i]!='0')ans1+=pow(2,j);
            j++;
        }
        return ans1;
    }
};