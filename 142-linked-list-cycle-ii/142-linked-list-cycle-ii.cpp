/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while(fast and fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast)
                break;
        }
        
        if(fast == NULL or fast -> next == NULL)
            return NULL;
        
        while(head != slow)
        {
            slow = slow -> next;
            head = head -> next;
        }
        return head;
    }
};