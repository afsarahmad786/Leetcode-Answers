class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA=0;int countB=0;
        ListNode* tempA=headA;
        ListNode* tempB=headB;
      if(!tempA || !tempB)
        return NULL;
      while(tempA!=NULL){
         countA++;
         tempA=tempA->next;
      }
      while(tempB!=NULL){
         countB++;
         tempB=tempB->next;
      }
      int diff=countA-countB;
      cout<<diff<<"\n";
      if(diff>0){
        cout<<"diff>0"<<"\n";
        for(int i=0;i<diff;i++){
          headA=headA->next;
        }
      }
      else if(diff<0)
      {
        cout<<"diff<0"<<"\n";
        for(int i=diff;i<0;i++){
          
           headB=headB->next;}
        
      }
      cout<<headB->val;
      while(headA!=headB)
      {
        headA=headA->next;
        headB=headB->next;
      }  
      if(headA!=headB)
        return NULL;
      return headA;
    }
};