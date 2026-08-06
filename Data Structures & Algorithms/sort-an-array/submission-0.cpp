class Solution {
public:
    vector<int> mergeSort(vector<int> &nums, int l,int r) {
        if (l>=r){
            return {nums[l]};
        }
        int mid = (l+r)>>1;
        vector<int> left = mergeSort(nums, l, mid);
        vector<int> right = mergeSort(nums, mid+1, r);
        vector<int> sortedArray(r-l+1,0);
        int cur = 0;
        int i=0;
        int j=0;
        while(i<left.size()&&j<right.size()){
            if(left[i]>=right[j]){
                sortedArray[cur++]=right[j++];
                continue;
            }
            sortedArray[cur++] = left[i++];
        }
        while(i<left.size()){
            sortedArray[cur++] = left[i++];
        }
        while(j<right.size()){
            sortedArray[cur++] = right[j++];
        }
        cur=0;
        for(int i=l;i<=r;i++){
            nums[i] = sortedArray[cur++];
        }
        return sortedArray;
    }
    vector<int> sortArray(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};