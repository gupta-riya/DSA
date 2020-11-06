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
   
    ListNode *getMid(ListNode *head)
    {
        ListNode *slow = NULL , *fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = (slow==NULL)?head:slow->next;
            fast = fast->next->next;
        }
        
        ListNode *mid = slow->next;
        slow->next = NULL;
        
        return mid;
    }
    
    ListNode *merge(ListNode *left , ListNode *right)
    {
        ListNode *tempHead = new ListNode() , *tail = tempHead;
        while(left!=NULL && right!=NULL)
        {
            if(left->val > right->val)
            {
                tail->next = right;
                right = right->next;
                tail = tail->next;
            }
            else
            {
                tail->next = left;
                left = left->next;
                tail = tail->next;
            }
        }
        
        tail->next = (left!=NULL)?left : right ; 
        
        return tempHead->next;
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode *mid = getMid(head);
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);
        
        return merge(left,right);
    }
};
