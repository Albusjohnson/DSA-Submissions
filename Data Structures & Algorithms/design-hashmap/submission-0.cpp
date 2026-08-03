class Node {
    public:
        int val;
        int key;
        Node *next;
        Node *prev;
        Node(int key, int value){
            this->key=key;
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
            head=new Node(-1,-1);
            tail=head;
        }
        void insert(int key,int value){
            tail->next=new Node(key,value);
            tail->next->prev=tail;
            tail=tail->next;
        }
        Node* contains(int key){
            Node*temp=head;
            while(temp){
                if(temp->key == key){
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

class MyHashMap {
public:
    vector<LinkedList*> ls;
    MyHashMap() {
        ls.resize(1000,NULL);
    }
    
    void put(int key, int value) {
        if (ls[key%(1000)]==NULL) {
            ls[key%(1000)]=new LinkedList();
        }
        Node* nd = ls[key%(1000)]->contains(key);
        if (nd != NULL ){
            nd->val=value;
            return;
        }
        ls[key%(1000)]->insert(key,value);
    }
    
    int get(int key) {
        if (ls[key%(1000)] == NULL) {
            return -1;
        }
        Node*node = ls[key%(1000)]->contains(key);
        if (node){
            return node->val;
        }
        return -1;
    }
    
    void remove(int key) {
        LinkedList*s = ls[key%(1000)];
        if (s==NULL){
            return;
        }
        ls[key%(1000)]->remove(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */