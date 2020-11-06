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
     
        int count = 0;
        
        ListNode *temp = head;
        
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        
        count--;
        
        temp = head;
        
        int number = 0; 
        
        while(temp!=NULL)
        {
            number += (temp->val)*(pow(2,count));
            count--;
            temp = temp->next;
        }
        
        return number;
    }
};
