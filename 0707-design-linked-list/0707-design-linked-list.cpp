class node{
    public:
    int val;
    node *next;
    node(int data){
        val=data;
        next=NULL;
    }
    };
    class MyLinkedList {
public:
node*head;
    MyLinkedList() {
        head=NULL;
        
    }
    int length(){
        int count=0;
        node*temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        return count;
    }
    
    int get(int index) {
        int len=length();
        if(head==NULL || len<index) return -1;
        else{
            int count=0;
            node*temp=head;
            while(count<index){
                //count++;
                temp=temp->next;
                count++;
            }
            if(temp==NULL) return -1;
            return temp->val;
        }
    }
    
    void addAtHead(int val) {
        node *new_node=new node(val);
        new_node->next=head;
        head=new_node;
    }
    
    void addAtTail(int val) {
        node *new_node=new node(val);
        if(head==NULL){
            head=new_node;
        }
        else{
            node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        }
        
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
        }
        else{
            int count=0;
            node*temp=head;
            while(temp!=NULL && count<index-1){
                    temp=temp->next;
                    count++;
            }
            if(temp==NULL) return;
            node* new_node = new node(val);
            node*right=temp->next;
            temp->next=new_node;
            new_node->next=right;
        }
    }
    
    void deleteAtIndex(int k) {
         if (head == NULL) return;
        else if(k==0){
            node*del=head;
            head=head->next;
            delete del;
        }
        else{
            int count=0;
            node*temp=head;
            while(count<k-1){
                temp=temp->next;
                count++;
            }
            if (temp == NULL || temp->next == NULL) return;
            node*del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }
    }
    
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */