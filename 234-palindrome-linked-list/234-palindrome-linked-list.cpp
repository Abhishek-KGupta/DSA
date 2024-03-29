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
    bool isPalindrome(ListNode* head) 
    {
        ListNode *fast = head, *slow = head, *prev = NULL, *tmp;
        while(fast and fast -> next)
        {
            fast = fast -> next -> next;
            
            tmp = slow -> next;
            slow -> next = prev;
            prev = slow;
            slow = tmp;
        }
        
        if(fast != NULL)
            slow = slow -> next;
        
        while(slow)
        {
            if(prev -> val != slow -> val)
                return false;
            slow = slow -> next;
            prev = prev -> next;
        
        }
        return true;
    }
};