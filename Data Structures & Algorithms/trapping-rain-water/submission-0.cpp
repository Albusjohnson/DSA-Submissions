class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> leftMx(height.size());
        leftMx[0]=height[0];
        for(int i=1;i<height.size();i++){
            leftMx[i]=max(leftMx[i-1],height[i]);
        }
        int rightMx=height.back();
        int ans=0;
        for(int i=height.size()-2;i>=0;i--){
            ans+=max(min(rightMx,leftMx[i])-height[i],0);
            rightMx=max(rightMx, height[i]);
        }
        return ans;
    }
};
