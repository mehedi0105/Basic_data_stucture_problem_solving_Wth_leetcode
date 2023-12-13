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
    ListNode *removeElements(ListNode *&head, int val)
    {
        if (head == NULL)
            return head;
        while (head != NULL && head->val == val)
        {
            head = head->next;
        }
        ListNode *newNode = head;
        while (newNode != NULL && newNode->next != NULL)
        {

            if (newNode->next->val == val)
            {
                ListNode *de = newNode->next;
                newNode->next = newNode->next->next;
                delete de;
            }
            else
                newNode = newNode->next;
        }
        //   ListNode*newNode1=head;
        //   if(head->val==val)
        //   head=NULL;
        return head;
    }
};
