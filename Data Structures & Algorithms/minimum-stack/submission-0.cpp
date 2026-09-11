class MinStack {
public:
stack<int> actual;
stack<int> mn;
    MinStack() {
    }
    
    void push(int val) {
        actual.push(val);
        if(!mn.size() || mn.top()>=val) {
            mn.push(val);
        }
    }
    
    void pop() {
        int top=actual.top();
        actual.pop();
        if(mn.top()==top){
            mn.pop();
        }
    }
    
    int top() {
        return actual.top();
    }
    
    int getMin() {
        return mn.top();
    }
};
