
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;  //fast and slow at 0 index
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                return true;
            }
        }

        return false;
    }
};