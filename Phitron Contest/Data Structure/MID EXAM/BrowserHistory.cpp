#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node* next;
        Node* prev;
        Node(string val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_node(Node* &head,Node* &tail,Node* &current,string val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    Node* tmp = tail;
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;

}
//visit
void visit(Node* head,Node* tail,Node* &current,string siteName){
    Node* tmp = head;
    bool flg = true;
    while(tmp!=NULL){
       
        if(tmp->val == siteName){
            flg = true;
            current = tmp;
            break;
        }else{
            flg = false;
        }
        tmp = tmp->next;
    }
    if(flg){
        cout<<current->val<<endl;
    }else{
        cout<<"Not Available"<<endl;
    }
}
//next
void next(Node* &current){
    if(current->next==NULL){
        cout<<"Not Available"<<endl;
    }else{
        cout<<current->next->val<<endl;
        current = current->next;
    }
}
//prev
void prev(Node* &current)
{
    if(current->prev==NULL){
        cout<<"Not Available"<<endl;
    }else{
        cout<<current->prev->val<<endl;
        current = current->prev;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* current = head;
    
    string val;
    while(true){
        cin>>val;
        if(val=="end"){
            break;
        }
        insert_node(head,tail,current,val);
    }
    int tcase; cin>>tcase;
    string operation;
    string siteName;
    while(tcase--)
    {
        cin>>operation;
        if(operation == "prev"){
            prev(current);
        }else if(operation =="next"){
            next(current);
        }else if(operation=="visit"){
            cin>>siteName;
            visit(head,tail,current,siteName);
        }
    }
    return 0;
}
