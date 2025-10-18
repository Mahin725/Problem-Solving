#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};

void insert_at_tail(Node* &head,Node* &tail,int value)
{
    Node* newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;
    
}

void printing_node(Node* head)

{
    Node* temp = head;
    while(temp !=NULL)
    {
        cout<<(*temp).val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// RemoveDuplicate
void removeDuplicate(Node* &head){
    // if(head->val==NULL || head->next== N)
    unordered_map<int,bool>seen;
    Node* current = head;
    Node* prev = nullptr;

    while(current !=nullptr){
        if(seen.count(current->val)){
            //delete kore dite hobe mmmah
            prev->next = current->next;
            current = prev->next;
        }else{
            seen[current->val] = true;
            prev =current;
            current = current->next;
        }
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    cout<<"Original Linklist-> "<<endl;
    printing_node(head);
    
    cout<<"New Linklist-> "<<endl;
    removeDuplicate(head);
    printing_node(head);
    return 0;
}