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
void insert_at_any_pos(Node *&head, Node *&tail,int size, int idx, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
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
    temp->next = newNode;
    temp->next->prev = newNode;
    size++;
}
void printing_forward(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<"L -> "<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void printing_backward(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<"R -> "<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
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
        if(size>=x){
            insert_at_any_pos(head,tail,size,x,v);
            printing_forward(head);
            printing_backward(tail);
        }else{
            cout<<"Invaild"<<endl;
        }
    }
    return 0;
}