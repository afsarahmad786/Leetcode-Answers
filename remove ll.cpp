class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      if(head==NULL)
        return NULL;
        while(head->val==val){
          if(!head->next){
          return NULL;}
          else
            head=head->next;
        }
      ListNode* prev, *current=head;
        while(current!=NULL){     
          if(current->val==val){
            current=current->next;
            prev->next=current;
          }
          else{
            prev=current;
            current=current->next;}
      }
      return head;
    }
};