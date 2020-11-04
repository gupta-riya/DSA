class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        ListNode temp = head ; 
        
        int count = 0 ; 
        
        while(temp!=null)
        {
            count++;
            temp = temp.next ; 
        }  
        
        if(count == 1)
        {
            return null ; 
        }
        temp =  head ; 
        
        int target = count - n +  1;
        
        int start =  1 ;
        
        if(target == 1)
        {
            head = head.next;
            return head;
        }
        
        while(start < target-1)
        {
           start++;
            temp = temp.next ; 
        }
        
        if(temp.next.next==null)
        {
            temp.next = null;
        }
        else
        {
            temp.next = temp.next.next;
            
        }
        
        return head;
    }
}
