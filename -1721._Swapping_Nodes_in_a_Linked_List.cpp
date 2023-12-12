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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *first_value = head;
        for (int i = 1; i < k; i++)
        {
            first_value = first_value->next;
        }
        ListNode *fast_value = head;
        ListNode *last_value = first_value;
        while (last_value != NULL && last_value->next != NULL)
        {
            fast_value = fast_value->next;
            last_value = last_value->next;
        }
        swap(first_value->val, fast_value->val);
        return head;
    }
};