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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *fast = head, *prv = nullptr, *slow = nullptr;
        int i = 0;
        if (!head->next)
            return nullptr;
        while (fast)
        {
            if (!slow)
            {
                slow = head;
                prv = slow;
            }
            else 
            {
                prv = slow;
                slow = slow->next;
            }
            while (++i < n && fast)
            {
                fast = fast->next;
            }
            if (fast)
                fast = fast->next;
        }
        cout << slow->val << endl;
        prv->next = slow->next;
        if (slow == head)
        {
            return head->next;
        }
        return head;
    }
};
