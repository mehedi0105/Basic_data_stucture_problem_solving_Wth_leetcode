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
class Solution
{
public:
    void insert_at_head(ListNode *&head, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    ListNode *reverseList(ListNode *head)
    {
        ListNode *newhead = NULL;
        ListNode *temp = head;
        while (temp != NULL)
        {
            insert_at_head(newhead, temp->val);
            temp = temp->next;
        }

        return newhead;
    }
};