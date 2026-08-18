class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int l=0, r=n.size()-1;
        while(l<r){
            if(n[r]+n[l]>target){
                r--;
            }
            else if(n[l]+n[r]<target){
                l++;
            }
            else{
                return {l+1,r+1};
            }
        }
        return {-1,-1};
    }
};
