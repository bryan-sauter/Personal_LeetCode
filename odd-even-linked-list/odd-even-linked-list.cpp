/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) return head;
        //make two linked lists then merge
        //we need evenHead so we remember where to set odd->next post processing
        auto odd = head, evenHead = head->next, even = evenHead;
        while(even && even->next)
        {
            //even is the node we really care about
            //shift everything to the right of even
            odd = odd->next = even->next;
            //move even to the right of odd
            even = even->next = odd->next;
        }
        odd->next = evenHead;
        return head;
    }
};
