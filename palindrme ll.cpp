class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        
        ListNode *prev = NULL, *curr = head;
        int len = 0;
        
        while(curr != NULL){ // find length 
            curr = curr->next;
            len++;
        }
        curr = head;
        // reverse first half 
        for(int i=1; i<=(len/2); i++){ 
            ListNode *temp = curr->next;
            curr->next = prev; 
            prev = curr;
            curr = temp;
        }
        if(len%2) curr = curr->next;
        
        while(curr != NULL){
            if(curr->val != prev->val) return false;
            curr = curr->next;
            prev = prev->next;
        }
        return true;
    }
};