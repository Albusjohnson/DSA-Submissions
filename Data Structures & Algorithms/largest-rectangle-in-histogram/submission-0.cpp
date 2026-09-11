class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        vector<int> right(heights.size(),0),left(heights.size(),0);
        for(int i=heights.size()-1;i>=0;i--){
            while(st.size()&&heights[st.top()]>=heights[i]){
                st.pop();
            }
            int ans=heights.size();
            if (st.size()){
                ans=st.top();
            }
            right[i]=ans;
            st.push(i);
        }
        while(st.size()){
            st.pop();
        }
        for(int i=0;i<heights.size();i++){
            while(st.size()&&heights[st.top()]>=heights[i]){
                st.pop();
            }
            int ans=-1;
            if (st.size()){
                ans=st.top();
            }
            left[i]=ans;
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<heights.size();i++){
            ans=max(ans,heights[i]*(right[i]-left[i]-1));
        }
        return ans;
    }
};
