class Solution {
public:
    void moveLeft(vector<int>& nums,int startL, int start, int last){
        for(int i=start;i<=last;i++){
            nums[startL]=nums[i];
            startL++;
        }
        return;
    }
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        int i=0;
        int last=n-1;
        while(i<=last){
            int next=i+1;
            while(next<=last&&nums[next]==nums[i]){
                next++;
            }
            moveLeft(nums, i+1, next, last);
            last-=next-i-1;
            i++;
        }
        return last+1;
    }
};