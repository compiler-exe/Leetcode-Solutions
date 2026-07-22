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
#define node ListNode
#define null NULL
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        node* prev = null;
        node* current = head;
        while(current !=null){
            node* temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        return prev;
    }
};
