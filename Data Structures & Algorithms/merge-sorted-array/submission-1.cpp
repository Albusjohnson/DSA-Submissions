class Solution {
public:
    void moveRight(vector<int>&nums1, int left, int limit){
        while(limit>left){
            limit--;
            nums1[limit+1]=nums1[limit];
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=0,right=0;
        int limit=m-1;
        while(left<=limit&&right<n){
            // cout<<left<<" "<<right<<endl;
            while(left<=limit&&nums2[right]>=nums1[left]){
                left++;
            }
            if(left<=limit){
                limit++;
                moveRight(nums1,left,limit);
                nums1[left]=nums2[right];
                left++;
                right++;
            }
        }
        while(right<n){
            nums1[++limit]=nums2[right++];
            // right++;
        }
        return;

    }
};