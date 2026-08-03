class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,bool> ans;
        for(auto i: nums){
            if(ans.count(i)){
                return 1;
            }
            ans[i]=1;
        }
        return 0;
    }
};