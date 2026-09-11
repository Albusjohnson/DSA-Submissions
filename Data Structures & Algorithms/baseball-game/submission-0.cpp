class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int cur =0;
        for(auto o:operations) {
            if (o == "+"){
                int tp1 = st.top();
                st.pop();
                int tp2 = st.top();
                int sum = tp1+tp2;
                st.push(tp1);
                st.push(sum);
                cur+=sum;
            }
            else if (o=="C") {
                int temp = st.top();
                st.pop();
                cur-=temp;
            }
            else if (o=="D") {
                int temp = st.top();
                cur+=2*temp;
                st.push(2*temp);
            }
            else {
                st.push(stoi(o));
                cur+=stoi(o);
            }
        }
        return cur;
    }
};