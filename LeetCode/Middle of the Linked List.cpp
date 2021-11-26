class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* sm=head, * bg=head;
        while(bg!=NULL && bg->next != NULL)
        {
          sm = sm->next; bg=bg->next->next;
        }
        return sm;
    }
};
