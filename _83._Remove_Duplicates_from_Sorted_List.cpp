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
    ListNode *deleteDuplicates(ListNode *head)
    {

        ListNode *tmp = head;
        while (tmp != NULL && tmp->next != NULL)
        {

            if (tmp->next->val == tmp->val)
            {
                ListNode *dele = tmp->next;
                tmp->next = tmp->next->next;
                delete dele;
            }
            else
                tmp = tmp->next;
        }
        return head;
    }
};