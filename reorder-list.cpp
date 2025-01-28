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

    ListNode *reverseList(ListNode *head)
    {
        ListNode *cur = head, *prv = nullptr, *nxt = nullptr;
        while (cur)
        {
            nxt = cur->next;
            cur->next = prv;
            prv = cur;
            cur = nxt;
        }
        return prv;
    }

    void reorderList(ListNode* head) 
    {
        ListNode *slow = nullptr, *fast = nullptr;
        if (head->next && head->next->next)
        {
            slow = head->next;
            fast = head->next->next;
        }
        else 
            return;
        while (fast)
        {
            if (fast->next && fast->next->next)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            else
                break;
        }
        fast = slow->next;
        fast = reverseList(fast);
        slow->next = nullptr;
        slow = head;
        ListNode *newNode, *hh = nullptr, *tail;
        while (slow || fast)
        {
            if (slow)
            {
                newNode = new ListNode(slow->val);
                if (!hh)
                {
                    hh = newNode;
                    tail = newNode;
                }
                else 
                {
                    tail->next = newNode;
                    tail = newNode;
                }
                slow = slow->next;
            }
            if (fast)
            {
                newNode = new ListNode(fast->val);
                tail->next = newNode;
                tail = newNode;
                fast = fast->next;
            }
        }
        // while (hh)
        // {
        //     cout << hh->val << endl;
        //     hh = hh->next;
        // }
        head->next = nullptr;
        head->next = hh->next;
    }
};
