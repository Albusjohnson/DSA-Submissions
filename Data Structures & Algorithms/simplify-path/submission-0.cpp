class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        for(int i=0;i<path.size();i++){
            string temp="";
            if(path[i]=='/'){
                continue;
            }
            while(i<path.size()&&path[i]!='/'){
                temp+=path[i];
                i++;
            }
            if(temp=="."){
                continue;
            }
            else if (temp==".."){
                if(st.size()){
                    st.pop();
                }
            } else{
                st.push(temp);
            }
        }
        string ans="";
        while(st.size()){
            ans="/"+st.top()+ ans;
            st.pop();
        }
        return ans.size()==0?"/":ans;
    }
};