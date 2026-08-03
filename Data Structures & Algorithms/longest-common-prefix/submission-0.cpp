class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==1){
            return strs[0];
        }
        sort(strs.begin(),strs.end());
        int i=0;
        string first=strs[0],second=strs.back();
        while(i<min(size(first),size(second))){
            if(first[i]==second[i]){
                i++;
                continue;
            }
            break;
        }
        return first.substr(0,i);
    }
};