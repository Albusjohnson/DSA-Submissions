class Solution {
public:
    // void printa(vector<int>&nums){
    //     for(auto i:nums){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    void sortColors(vector<int>& nums) {
        int z =0;
        int o =0;
        for(int i=0;i<nums.size();i++){
            if(!nums[i]){
                swap(nums[i],nums[z]);
                z++;
                o=max(o,z);
            }
            if(nums[i]==1){
                swap(nums[i],nums[o]);
                o++;
            }
            // printa(nums);
        }
    }
};