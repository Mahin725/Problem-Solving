#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_any_pos(Node *&head, Node *&tail, int &size, int idx, int val)
{
    Node *newNode = new Node(val);

    if (idx == 0)
    {
        newNode->next = head;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        if (tail == NULL)
        {
            tail = head;
        }
        size++;
        return;
    }

    if (idx == size)
    {
        newNode->prev = tail;
        if (tail != NULL)
        {
            tail->next = newNode;
        }
        tail = newNode;
        if (head == NULL)
        {
            head = tail;
        }
        size++;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    size++;
}

void printing_forward(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->next != NULL)
        {
            cout << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

void printing_backward(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->prev != NULL)
        {
            cout << " ";
        }
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int x, v;
        cin >> x >> v;
        if (x >= 0 && x <= size)
        {
            insert_at_any_pos(head, tail, size, x, v);
            printing_forward(head);
            printing_backward(tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}
