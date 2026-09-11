class Solution {
public:
stack<int> nums;
stack<string> repeatedString;
string ans="";
    string decodeString(string s) {
        int temp=0;
        for(auto i:s){
            if(isdigit(i)){
                temp=10*temp+(i-'0');
            }
            else if(i=='['){
                nums.push(temp);
                repeatedString.push(ans);
                temp=0;
                ans="";
            }
            else if (i==']') {
                string decodedString=repeatedString.top();
                repeatedString.pop();
                int cnt = nums.top();
                nums.pop();
                while(cnt--){
                    decodedString+=ans;
                }
                ans=decodedString;
            }
            else{
                ans+=i;
            }
        }
        return ans;
    }
};