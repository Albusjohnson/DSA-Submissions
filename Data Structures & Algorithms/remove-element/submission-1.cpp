class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last=nums.size()-1,i=0;
        while(i<=last){
            if(nums[i]==val){
                swap(nums[i],nums[last]);
                last--;
                continue;
            }
            i++;
        }
        return last+1;
    }
};