class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i:s){
            switch (i) {
                case '(':
                case '[':
                case '{':
                    st.push(i);
                    break;
                case '}':
                case ']':
                case ')':
                    if (!st.size() || i=='}' && st.top()!='{' || i==']' && st.top()!='[' || i==')' && st.top()!='(') {
                        return false;
                    }
                    st.pop();
            }
        }
        return st.size()==0?true:false;
    }
};
