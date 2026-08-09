class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0){
                nums[i]=n+1;
            }
        }
        // int ans=1;
        for(auto i:nums){
            if(i>n){
                continue;
            }
            int idx = abs(i)-1;
            if(idx<n&&idx>=0){
                nums[idx]= -abs(nums[idx]);
            }
        }
        for(auto i:nums){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};