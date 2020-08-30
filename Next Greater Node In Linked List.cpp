class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *prev=NULL;
        while(head){
            ListNode *t = head->next;
            head->next=prev;
            prev=head;
            head=t;
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> st;
        vector<int> v;
        head=reverse(head);
        while(head){
            while(!st.empty()&&head->val>=st.top())
                st.pop();
            int pg = (st.empty())? 0 : st.top();
            
            v.push_back(pg);
            st.push(head->val);
            
            head=head->next;
        }
        std::reverse(v.begin(), v.end());
        return v;
        
    }
};