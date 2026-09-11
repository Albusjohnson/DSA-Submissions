class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto a: asteroids) {
            bool destroyed = false;
            while (st.size()&&st.top()>0&&a<0){
                if(abs(a)<abs(st.top())){
                    destroyed = true;
                    break;
                } else if (abs(a)==abs(st.top())){
                    st.pop();
                    destroyed=true;
                    break;
                }
                else {
                    st.pop();
                }
            }
            if (!destroyed){
                st.push(a);
            }
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