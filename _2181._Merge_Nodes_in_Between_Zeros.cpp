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
    void insert_value(ListNode *&head, ListNode *&tail, int val)
    {
        if (val > 0)
        {
            ListNode *newNode = new ListNode(val);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            tail = newNode;
        }
    }
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *newNode = NULL;
        ListNode *newtail = NULL;
        ListNode *temp = head;
        int sum = 0;
        while (temp != NULL)
        {
            if (temp->val == 0)
            {
                insert_value(newNode, newtail, sum);
                sum = 0;
            }
            sum = sum + temp->val;
            temp = temp->next;
        }
        return newNode;
    }
};
