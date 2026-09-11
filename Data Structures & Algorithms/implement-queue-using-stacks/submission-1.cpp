class MyQueue {
public:
 stack<int> in;
 stack<int> out;
    MyQueue() {
        
    }
    void in_to_out(){
        if (out.size()){
            return;
        }
        while(in.size()){
            out.push(in.top());
            in.pop();
        }
    }
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        in_to_out();
        int ans = out.top();
        out.pop();
        return ans;
    }
    
    int peek() {
        in_to_out();
        return out.top();
    }
    
    bool empty() {
        in_to_out();
        return out.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */