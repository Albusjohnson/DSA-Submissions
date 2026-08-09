class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum =0;
        int total=0;
        mp[0]=1;
        for(auto i:nums){
            sum+=i;
            if(mp[sum-k]){
                total+=mp[sum-k];
            }
            mp[sum]++;
        }
        return total;
    }
};