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
      ListNode* middle(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow -> next;
            fast = fast-> next -> next;
        }
        return slow;
      }
};