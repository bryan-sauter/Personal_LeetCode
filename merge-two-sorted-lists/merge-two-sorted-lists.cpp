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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode start = ListNode();
        //this is needed to populate the list and start is saved so we keep the beginning
        ListNode* newHead = &start;        
        
        while( l1 != nullptr && l2 != nullptr )
        {
            if( l1->val < l2->val )
            {
                newHead->next = l1;
                l1 = l1->next;
            }
            else
            {
                newHead->next = l2;
                l2 = l2->next;
            }
            newHead = newHead->next;
        }
        //capture the rest of the non empty list
        newHead->next = l1 ? l1 : l2;
        
        return start.next;
    }
};
