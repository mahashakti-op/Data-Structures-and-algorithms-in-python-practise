class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr) return nullptr;
        if(left == right) return head;
        ListNode* t = head;
        ListNode* before = nullptr;
        int pos = 1;

        while(pos < left){
            before = t;
            t = t -> next;
            pos++;
            continue;
        }   //now pos = left , start reversing
        
        ListNode* curr = t;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        int times = right - left + 1;   //kitni baar reverse karna hai
        while(times--){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        t -> next = curr;
        if(before){
            before -> next = prev;
            return head;
        }
        return prev;
    }
};