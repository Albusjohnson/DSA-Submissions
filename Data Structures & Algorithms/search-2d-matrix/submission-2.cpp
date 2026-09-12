class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rl=0,rr=matrix.size()-1;
        while(rl<=rr){
            int mid=rl+((rr-rl)>>1);
            if(matrix[mid][0]==target){
                // cout<<matrix[mid][0]<<" "<<target<<endl;
                return true;
            }
            else if (matrix[mid][0]>target){
                rr=mid-1;
            }
            else{
                rl=mid+1;
            }
        }
        if(rr<0){
            return false;
        }
        // cout<<rl<<" "<<rr<<endl;
        int cl=0,cr=matrix[0].size()-1;
        while(cl<=cr){
            int mid=cl+((cr-cl)>>1);
            if(matrix[rr][mid]==target){
                // cout<<matrix[rr][mid]<<" "<<target<<endl;
                return true;
            }
            else if(matrix[rr][mid]>target){
                cr=mid-1;
            }
            else{
                cl = mid+1;
            }
        }
        return false;
    }
};
