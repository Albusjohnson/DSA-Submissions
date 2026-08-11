class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fast=0,slow=0;
        while(fast<nums.size()){
            while(fast+1<nums.size()&&nums[fast]==nums[fast+1]) {
                fast++;
            }
            nums[slow]=nums[fast];
            fast++;
            slow++;
        }
        return slow;
    }
};