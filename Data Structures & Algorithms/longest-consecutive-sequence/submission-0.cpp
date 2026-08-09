class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        bool first=1;
        int prev=-1;
        int longest=0;
        int mx=0;
        for(auto i:mp){
            if(first){
                first=1-first;
                longest=1;
                prev=i.first;
                continue;
            }
            if(i.first-prev==1){
                longest++;
            } else{
                mx=max(longest,mx);
                longest=1;
            }
            prev=i.first;
        }
        mx=max(longest,mx);
        return mx;
    }
};
