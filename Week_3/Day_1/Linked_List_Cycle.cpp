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
     bool Linkedlistcycle(ListNode* head) {
        if (head == NULL || head-> next == NULL) return false;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow -> next;
            fast = fast->next->next;

            if (fast == slow) return true;
        }
        return false;
     }
};