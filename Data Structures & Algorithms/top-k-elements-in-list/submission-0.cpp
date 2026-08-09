class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> freq(nums.size()+1,vector<int>(0));
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            freq[i.second].push_back(i.first);
        }
        for(int i=nums.size();i>0;i--){
            for(int j=0;j<freq[i].size();j++){
                ans.push_back(freq[i][j]);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
