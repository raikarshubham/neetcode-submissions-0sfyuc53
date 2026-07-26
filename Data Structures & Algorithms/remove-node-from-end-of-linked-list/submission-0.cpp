class Solution {
public:
    int findsize(ListNode* head) {
        int sz = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            temp = temp->next;
            sz++;
        }

        return sz;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = findsize(head);

        // Delete the first node
        if (size == n) {
            return head->next;
        }

        ListNode* prev = head;

        for (int i = 1; i < size - n; i++) {
            prev = prev->next;
        }

        prev->next = prev->next->next;

        return head;
    }
};