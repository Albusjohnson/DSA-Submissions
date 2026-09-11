class Solution {
public:
    void checkBreak(stack<int> &st){
        if(st.size()<=1){
            return;
        }
        int right = st.top();
        st.pop();
        int left = st.top();
        if (right>0||left*right>0){
            st.push(right);
            return;
        }
        if (left*right<0) {
            if(abs(left)<abs(right)){
                st.pop();
                st.push(right);
                checkBreak(st);
            } else if(abs(left)==abs(right)) {
                st.pop();
            }
        }

    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto a: asteroids) {
            if (!a){
                continue;
            }
            st.push(a);
            checkBreak(st);
        }
        vector<int> ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};