void deleteNode(struct ListNode* node) {
    struct ListNode *prev;
    for(;node->next!=NULL;prev = node, node=node->next)
        node->val = node->next->val;  
    prev->next = NULL;
    return ;
}