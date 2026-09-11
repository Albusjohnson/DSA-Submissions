class FreqStack {
public:
unordered_map<int,int> num;
unordered_map<int,stack<int>>freq;
int mx=0;
    FreqStack() {
        
    }
    void push(int val) {
        int cur = ++num[val];
        freq[cur].push(val);
        mx=max(mx,cur);
    }
    
    int pop() {
        int cur=freq[mx].top();
        num[cur]--;
        freq[mx].pop();
        if(!freq[mx].size()){
            mx--;
        }
        return cur;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */