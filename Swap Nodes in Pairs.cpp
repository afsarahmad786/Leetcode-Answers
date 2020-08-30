class Solution {
public:
    
    ListNode* swapPairs(ListNode* head) {
        
    ListNode *rem, *new_head;
        if(head == NULL or head->next == NULL)
        {
            return head;
        }
        
        rem = head->next->next;
        new_head = head->next;
        head->next->next = head;
        head->next = swapPairs(rem);
        return new_head;
        
    }
};