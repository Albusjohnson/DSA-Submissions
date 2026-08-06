class Solution {
public:

    string encode(vector<string>& strs) {
        string test = "";
        for(int i=0; i<strs.size();i++){
            test = test + '{' + to_string(strs[i].size()) + '}' + strs[i];
        }
        // cout<<test<<endl;
        return test;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()&& s[i]=='{'){
            string temp = "";
            string num = "";
            i++;
            while(i<s.size()&&s[i]!='}'){
                num=num+s[i];
                i++;
            }
            i++;
            // cout<<num<<endl;
            int numInt = stoi(num);
            for(int j=0;j<numInt&&i<s.size();j++){
                temp=temp+s[i];
                i++;
            }
            ans.push_back(temp);
            temp="";
        }
        // ans.push_back(temp);
        return ans;
    }
};
