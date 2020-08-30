ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return nullptr;
        int size = 0;
		/*business logic to handle k >= size of list*/
        ListNode* i = head, *j = head;
        while(head) {
            size++;
            head = head->next;
        }
        head = i;
        if(k >= size) {
            k = k % size;
        }
		/*Actual processing by maintaining two pointers that are k nodes apart*/
        while(k--) {
            j = j->next;
        }
        while(j->next) {
            i = i->next;
            j = j->next;
        }
        j->next = head;
        head = i->next;
        i->next = nullptr;
        return head;
}