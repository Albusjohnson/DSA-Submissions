class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        for(auto i:nums){
            mp.insert(i);
        }
        int mx=0;
        for(auto i : nums){
            if (mp.find(i) == mp.end()) continue;
            cout<<i<<endl;
            int right =i+1;
            int left=i-1;
            int cur=1;
            mp.erase(i);
            while(mp.find(right)!=mp.end()){
                cur++;
                mp.erase(right);
                right++;
            }
            while(mp.find(left)!=mp.end()){
                cur++;
                mp.erase(left);
                left--;
            }
            mx=max(mx,cur);
        }
    return mx;
    }
};
