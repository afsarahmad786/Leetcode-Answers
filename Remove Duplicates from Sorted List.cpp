class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode dummy, *k;
        k=&dummy;
        k->next=head;
        k=k->next;
        while(head && k){
            if(k->next && (head->val != (k->next)->val)){
                head->next=k->next;
                head=head->next;
            }
            k=k->next;
        }
        head->next = NULL;
        return dummy.next;
    }
};