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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *temp = head ; 
        
        int count = 0 ; 
        
        while(temp!=NULL)
        {
            count++;
            temp = temp->next ; 
        }  
        
        if(count == 1)
        {
            return NULL ; 
        }
        temp =  head ; 
        
        int target = count - n +  1;
        
        int start =  1 ;
        
        if(target == 1)
        {
            head = head->next;
            return head;
        }
        
        while(start < target-1)
        {
           start++;
            temp = temp->next ; 
        }
        
        if(temp->next->next==NULL)
        {
            temp->next = NULL;
        }
        else
        {
            temp->next = temp->next->next;
            
        }
        
        return head;

    }
};
