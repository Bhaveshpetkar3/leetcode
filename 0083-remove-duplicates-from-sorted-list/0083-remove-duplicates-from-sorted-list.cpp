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
ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL)return NULL;
    ListNode *current,*previous;
    current=head->next;
    previous=head;
    while(current!=NULL)
    {
        if(current->val==previous->val)
        {
            previous->next=current->next;
        }
        else
        {
            previous=current;
        }
        current=current->next;
    }
    return head;
    }
};