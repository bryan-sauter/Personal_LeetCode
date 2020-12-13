/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool> nodes;
        while(head)
        {
            if(nodes[head])
                return true;
            nodes[head] = true;
            head = head->next;
        }
        return false;
    }
};
