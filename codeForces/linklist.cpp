#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void removeDuplicates(Node* head) {
    Node* current = head;

    while (current != NULL) {
        Node* runner = current;

        while (runner->next != NULL) {
            if (runner->next->val == current->val) {
                Node* duplicate = runner->next;
                runner->next = duplicate->next;
                delete duplicate;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL) cout << " ";
        head = head->next;
    }
}

int main() {
    int x;
    Node* head = NULL;
    Node* tail = NULL;

    while (cin >> x && x != -1) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    removeDuplicates(head);
    printList(head);

    return 0;
}
