class StockSpanner {
public:
stack<pair<int,int>> st;
int cur;
    StockSpanner() {
        cur=0;
    }
    
    int next(int price) {
        this->cur++;
        while(st.size()&&price>=st.top().first){
            st.pop();
        }
        int ans=cur;
        if (st.size()){
            ans=this->cur-st.top().second;
        }
        st.push({price,this->cur});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */