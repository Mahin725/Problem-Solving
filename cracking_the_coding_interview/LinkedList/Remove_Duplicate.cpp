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