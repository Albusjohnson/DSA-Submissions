class Node {
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int value){
            val=value;
            next=NULL;
            prev=NULL;
        }
};


class LinkedList {
    public:
        Node *head;
        Node *tail;
        LinkedList(){
            head=new Node(-1);
            tail=head;
        }
        void insert(int key){
            tail->next=new Node(key);
            tail->next->prev=tail;
            tail=tail->next;
        }
        Node* contains(int key){
            Node*temp=head;
            while(temp){
                if(temp->val == key){
                    return temp;
                }
                temp=temp->next;
            }
            return NULL;
        }
        void remove(int key){
            Node* nd=this->contains(key);
            if(!nd){
                return;
            }
            Node*prev=nd->prev;
            Node*next=nd->next;
            prev->next=next;
            if(next){
                next->prev=prev;             
            }
            else{
                tail=prev;
            }
            return;
        }
};

class MyHashSet {
public:
    LinkedList *ls; 
    MyHashSet() {
        ls = new LinkedList(); 
    }
    
    void add(int key) {
        if (ls->contains(key) != NULL ){
            return;
        }
        ls->insert(key);
    }
    
    void remove(int key) {
        ls->remove(key);
    }
    
    bool contains(int key) {
        Node* nd = ls->contains(key);
        if(nd==NULL){
            return 0;
        }
        return 1;
    }
};
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */