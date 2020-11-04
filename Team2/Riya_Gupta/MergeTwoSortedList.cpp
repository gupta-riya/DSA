/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        
        if(l1==null)
            return l2;
        if(l2==null)
            return l1;
        
        ListNode temp1 = l1 ; 
        ListNode temp2 = l2;
        ListNode result = new ListNode(0);
        ListNode curr = result ; 
       
        
        while(temp1!=null && temp2!=null)
        {
            if(temp1.val>=temp2.val)
            {
                curr.next = temp2;
                curr = curr.next;
                 temp2 = temp2.next;
            }
            else
            {
                 curr.next = temp1;
                 curr = curr.next;
                  temp1 = temp1.next;
                       
            }
        }
        
        while(temp1!=null)
        {
            curr.next = temp1 ; 
            temp1 = temp1.next;
            curr = curr.next;
          
        }
        while(temp2!=null)
        {
            curr.next = temp2 ; 
            temp2 = temp2.next;
            curr = curr.next;
           
        }
       
       return result.next; 
    }
}
