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

#define Node ListNode
#define null NULL
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==null){
            return null;
        }
        if(k==0){
            return head;
        }
        Node* fast = head;
        int count=1;
        while(fast!=null && fast->next!=null){
            fast= fast->next;
            count++;
        }
        if(k>count){
            k = k%count;
        }
        if(k%count==0){
            return head;
        }
        int final_point = count-k-1;
        Node* point = head;
        Node* start = head->next;
        while(final_point>0){
            start = start->next;
            final_point--;
            point = point->next;
        }
        point->next= null;
        fast->next = head;
        return start;
    }
};
