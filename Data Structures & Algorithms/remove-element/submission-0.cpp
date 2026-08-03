class Solution {
public:
    void mvLast(vector<int>&nums,int cur,int last){
        for(int i=cur;i<last;i++){
            nums[i]=nums[i+1];
        }
    }
    int removeElement(vector<int>& nums, int val) {
        int last=nums.size()-1;
        for(int i=0;i<=last;i++){
            while(nums[i]==val && i<=last){
                mvLast(nums,i,last);
                last--;
            }
        }
        return last+1;
    }
};