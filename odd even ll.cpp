class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode* secondHead = head->next;
        ListNode* firstCurrent = head;
        ListNode* secondCurrent = secondHead;
        while(secondCurrent && secondCurrent->next){
            firstCurrent->next = secondCurrent->next;
            firstCurrent = firstCurrent->next;
            secondCurrent->next = firstCurrent->next;
            secondCurrent = secondCurrent->next;
        }
        firstCurrent->next = secondHead;
        return head;
    }
};