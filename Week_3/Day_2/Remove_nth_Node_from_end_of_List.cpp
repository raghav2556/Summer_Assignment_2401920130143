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

class solution{
    public:
     ListNode* removenode(ListNode* head , int n) {
        if (head->next == NULL) return NULL;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* temp = head;
        int sz = 0;

        while(temp != NULL) {
            temp = temp->next;
            sz++;
        }

        temp = dummy;
        int c = 0;

        while(c < sz-n) {
            temp = temp->next;
            c++;
        }

        if (temp != NULL && temp->next != NULL) {
            ListNode* next = temp->next;
            temp->next = next->next;
            next->next = NULL;
        }

        return dummy->next;

     }
};