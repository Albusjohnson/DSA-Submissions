class Solution {
public:
stack<string> st;
    string decodeString(string s) {
        string ans="";
        for(auto i:s){
            if(i!= ']'){
                st.push(string(1, i));
            }
            else{
                string temp="";
                while(st.top()!="["){
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                std::string countStr = "";
                while (!st.empty() && std::isdigit(st.top()[0])) {
                    countStr = st.top() + countStr;
                    st.pop();
                }
                
                int count = std::stoi(countStr);
// 3. Repeat substring count times
                std::string repeated = "";
                while (count--) {
                    repeated += temp;
                }

                // 4. Push expanded result back onto stack
                st.push(repeated);
            }
        }
        while(st.size()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};