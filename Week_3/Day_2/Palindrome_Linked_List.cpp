#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode* next;

    ListNode(int d) {
        this->data = d;
        this->next = NULL;
    }
};


class solution {
    public:
      ListNode* getmid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
      }

      ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* forward = NULL;

        while (temp != NULL) {
            forward = temp->next;
            temp->next = prev;
            prev = temp;
            temp = forward;
        }

        return prev;
      }

      bool palindrome(ListNode* head) {
        if (head->next == NULL) return true;

        ListNode* mid = getmid(head);

        ListNode* temp = mid->next;
        mid->next = reverse(temp);

        ListNode* head1 = head;
        ListNode* head2 = mid->next;

        while(head2 != NULL) {
            if (head1 -> data != head2 -> data) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
      }
};