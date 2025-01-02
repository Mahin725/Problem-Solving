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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = tail;
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void isPalindrome(Node* head,Node* tail)
{
    bool flg = true;
    Node* Fristtmp = head;
    Node* lasttmp = tail;

    while(Fristtmp != lasttmp)
    {
        if(Fristtmp->val != lasttmp->val){
            flg = false;
            break;
        }

        Fristtmp = Fristtmp->next;
        lasttmp = lasttmp->prev;
    }
    if(flg){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    isPalindrome(head,tail);
    return 0;
}