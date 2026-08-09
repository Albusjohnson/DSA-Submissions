class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int pr=nums.back();
        for(int j=nums.size()-2;j>=0;j--){
            ans[j]=ans[j]*pr;
            pr*=nums[j];
        }
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     ans.push_back(pr*suf[i+1]);
        //     pr*=nums[i];
        // }
        return ans;

    }
};
