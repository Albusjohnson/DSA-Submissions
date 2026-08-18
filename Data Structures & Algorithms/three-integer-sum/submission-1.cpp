class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int temp = nums[i]+nums[l]+nums[r];
                if(temp==0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    int temp=l;
                    while(temp<r && nums[temp]==nums[l]){
                        temp++;
                    }
                    l=temp;
                    temp=r;
                    while(l<temp && nums[temp]==nums[r]){
                        temp--;
                    }
                    r=temp;
                }
                else if(temp>0){
                    r--;
                }
                else{
                    l++;
                }
            }
            while(i+1<nums.size()-2 && nums[i]==nums[i+1]){
                i++;
            }
        }
        return ans;
    }
};
