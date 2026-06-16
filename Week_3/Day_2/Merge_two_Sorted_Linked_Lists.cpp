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
      ListNode* solve(ListNode* l1 , ListNode* l2) {
        if (l1 -> next == NULL) {
            l1 -> next = l2;
            return l1;
        }

        ListNode* curr1 = l1;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = l2;
        ListNode* next2 = curr2->next;

        while(curr2 != NULL && next1 != NULL) {
            if (curr2 -> data >= curr1 -> data && curr2 -> data <= next1->data) {
                curr1->next = curr2;
                next2 = curr2->next;
                curr2 -> next = next1;

                curr1 = curr2;
                curr2 = next2;
            }

            else {
                curr1 = next1;
                next1 = next1 -> next;

                if (next1 == NULL) {
                    curr1 -> next = curr2;
                    return l1;
                }
            }
        }
        return l1;
      }
      
      ListNode* mergetwolist(ListNode* list1 , ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        if (list1 -> data < list2 -> data) {
            return solve(list1 , list2);
        }
        else return solve(list2 , list1);
      }

};