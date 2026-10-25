class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head ;
        
        int n =1 ; //intilay take no of node 1 
        ListNode* last = head;
        
        while(last->next!=NULL){
            n++; 
            last = last -> next ; 
        } // after loop we get no. of nodes and last node's address 
        
        k = k % n ; 
        if(k==0)return head ;  //Rotate hone ke baad bhi same rahega 
        int count = 1; 
        ListNode* t = head;

        while(t != NULL){
            if(count ==(n-k)) break ; //last node that we want to make
            count++; 
            t = t -> next;
        }       //here we found t that is n-k 
        
        //Main arrow connection below 
        last -> next = head ; 
        ListNode*res = t -> next ; 
        t->next = NULL ; 
        return res ; 
    }
};