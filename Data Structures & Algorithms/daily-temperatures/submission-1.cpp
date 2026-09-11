class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        int n = temp.size();
        vector<int> a;
        for (int i=n-1;i>=0;i--){
            while(st.size()&&temp[st.top()]<=temp[i]){
                st.pop();
            }
            int ans=0;
            if (st.size()){
                ans=st.top()-i;
            }
            a.push_back(ans);
            st.push(i);
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
