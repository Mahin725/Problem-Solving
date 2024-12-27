class Solution {
public:
    void insert_at_tail(ListNode* &head,ListNode* &tail,int val)
    {   
        ListNode* newNode = new ListNode(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp = head;
        ListNode* newListHead = NULL;
        ListNode* newListTail = NULL;
        int sum = 0;
        while(tmp !=NULL)
        {
            if(tmp->val == 0 && sum>0)
            {
               insert_at_tail(newListHead,newListTail,sum);
                sum = 0;
                tmp = tmp->next;
            }
            else{
                sum+=tmp->val;
                tmp = tmp->next;
            }
        }
        return newListHead;
    }
};