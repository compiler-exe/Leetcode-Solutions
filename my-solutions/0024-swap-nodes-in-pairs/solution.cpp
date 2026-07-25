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
#define ed endl
class Solution {
public:
void reverse (Node* head , int time){
    Node* prev = null;
    Node* current = head;
    while(time--){
        Node* nex = current->next;
        current->next=prev;
        prev = current;
        current = nex;
    }
    return;
}
    ListNode* swapPairs(ListNode* head) {
        if(head == null){
            return null;
        }
        Node* left = head;
        Node* right;
        Node* res = null;
        Node* prevleft = null;
        int size=2;
        while(true){
            right = left;
            for(int i =0; i< size-1;i++){
                if(right == null)
                break;
                right = right->next;
            }
            if(right){
                Node* nextleft = right->next;
                reverse(left , size);
                if(prevleft)
                prevleft->next = right;
                prevleft = left;
                if(res==null)
                res=right;
                left=nextleft;
            }
            else
            {
                if(prevleft)
                prevleft->next=left;
                if(res==null)
                res=left;
                break; 
            }
        }
        return res;
    }
};
