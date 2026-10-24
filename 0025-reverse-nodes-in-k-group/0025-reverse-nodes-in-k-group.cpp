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
    void reverse(ListNode* head, int times){
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(times--){
            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head -> next = curr;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr) return head;
        ListNode* left = head;      //first element
        ListNode* res = nullptr;    //used only once for returning
        ListNode* prevleft = nullptr;    //very important
        ListNode* right;
        int size = k;

        while(true){
            right = left;
            for(int i = 0; i<size-1; i++){   //every 2 pairs
                if(right == nullptr) break;  //final odd waale number ke liye
                right = right -> next;  //right ke agla waala element (100 -> 200)
            }
            if(right){    //left right ka pair mil gaya hai 
                ListNode* nextleft = right -> next;     //300 is declared as nextleft
                reverse(left,size);    //reversing happens b/w first and second node
                if(prevleft){       //for a valid prevleft value
                    prevleft -> next = right;   // main line prevleft points to reversed right
                }
                prevleft = left;            //left1 -> left2 -> left3 -> left4......

                if(res == nullptr) res = right;
                left = nextleft;
            }
            else{       //no right value (odd number)
                if(prevleft) prevleft -> next = left;   //500 points to 700 (last left)
                if(res == nullptr) res = left;  //For edge case of only 1 element i.e only 100
                break;
            }
        }
        return res;
    }
};