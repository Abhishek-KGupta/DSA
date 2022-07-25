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
    ListNode* middleNode(ListNode* head)
    {
        ListNode* mid;
        int c=1;
        while(head!=NULL)
        {
            head=head->next;
            if(c%2==0)
                mid=mid->next;
            c++;
        }
        return mid;
    }
};