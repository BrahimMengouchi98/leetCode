/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    bool hasCycle(ListNode *head) 
    {
        unordered_set<ListNode*> nodeSet;
        while (head)
        {
            if (nodeSet.find(head) != nodeSet.end())
                return true;
            nodeSet.insert(head);
            head = head->next;
        }
        return false;
    }
};
