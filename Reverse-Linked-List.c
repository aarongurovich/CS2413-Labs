struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *nextNode, *prevNode = NULL;
    while (head) {
        nextNode = head->next;
        head->next = prevNode;
        prevNode = head;
        head = nextNode;
    }
    return prevNode;
}
