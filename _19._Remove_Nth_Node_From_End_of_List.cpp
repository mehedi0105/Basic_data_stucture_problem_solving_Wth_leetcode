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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int cnt = 0;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        ListNode *newNode = head;
        if (cnt == 1)
        {
            return NULL;
        }
        int lop = cnt - n;
        if (lop == 1)
        {
            // newNode=newNode->next;
            newNode->next;
        }
        for (int i = 1; i < lop; i++)
            newNode = newNode->next;
        ListNode *del_value = newNode->next;
        newNode->next = newNode->next->next;
        delete del_value;
        return head;
    }
};