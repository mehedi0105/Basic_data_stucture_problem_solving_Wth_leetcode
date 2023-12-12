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
    int getDecimalValue(ListNode *head)
    {
        ListNode *newNode = head;
        int fast = 0;
        while (newNode != NULL)
        {

            fast = fast * 2 + newNode->val;
            newNode = newNode->next;
        }
        return fast;
    }
};