class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
            int l=j+1,r=nums.size()-1;
            while(l<r){
                long long temp = (long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[r];
                if(temp==target){
                    ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                    while(l+1<r && nums[l]==nums[l+1]){
                        l++;
                    }
                    while(l<r-1 && nums[r-1]==nums[r]){
                        r--;
                    }
                    l++;
                    r--;
                }
                else if(temp>target){
                    r--;
                }
                else{
                    l++;
                }
            }
            while(j+1<nums.size()-2 && nums[j]==nums[j+1]){
                j++;
            }
        }
        while(i+1<nums.size()-3 && nums[i]==nums[i+1]){
            i++;
        }
        }
        return ans;
    }
};