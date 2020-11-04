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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
        ListNode *temp1 = l1 ; 
        ListNode *temp2 = l2;
        ListNode *result = new ListNode(0);
        ListNode *curr = result ; 
       
        
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val>=temp2->val)
            {
                curr->next = temp2;
                curr = curr->next;
                 temp2 = temp2->next ;
            }
            else
            {
                 curr->next = temp1;
                 curr = curr->next;
                  temp1 = temp1->next;
                       
            }
        }
        
        while(temp1!=NULL)
        {
            curr->next = temp1 ; 
            temp1 = temp1->next;
          
            curr = curr->next;
          
        }
        while(temp2!=NULL)
        {
            curr->next = temp2 ; 
            temp2 = temp2->next;
            curr = curr->next;
           
        }
       
       return result->next; 
    }
};
