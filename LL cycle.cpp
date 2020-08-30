class Solution {
public:
    bool hasCycle(ListNode *head) {
      ListNode* hare=head;
      ListNode*tortoise=head;
      while(hare){
        if(hare->next==NULL || hare->next->next==NULL)
          return false;
        
          hare=hare->next->next;
          tortoise=tortoise->next;
        if(hare->val==tortoise->val)
          return true;
      }
      return false;
    }
};