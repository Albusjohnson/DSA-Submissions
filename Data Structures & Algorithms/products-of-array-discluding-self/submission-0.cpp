class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size()+1,1);
        vector<int> suf(nums.size()+1,1);
        int pr =1;
        for(int i=1;i<=nums.size();i++){
            pre[i]=pr;
            pr*=nums[i-1];
        }
        pr=1;
        for(int i=nums.size();i>0;i--){
            suf[i]=pr;
            pr*=nums[i-1];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(pre[i+1]*suf[i+1]);
        }
        return ans;

    }
};
