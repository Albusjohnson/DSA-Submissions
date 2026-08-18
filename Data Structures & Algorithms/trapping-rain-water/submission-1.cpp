class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=1, n=height.size();
        int sum=0,ans=0;
        while(r<n){
            if(height[l]<=height[r]){
                ans+=max(0,(r-l-1)*height[l]-sum);
                l=r;
                sum=0;
            }
            else{
                sum+=height[r];
            }
            r++;
        }
        reverse(height.begin(),height.end());
        l=0,r=1,sum=0;
        while(r<n){
            if(height[l]<height[r]){
                ans+=max(0,(r-l-1)*height[l]-sum);
                l=r;
                sum=0;
            }
            else{
                sum+=height[r];
            }
            r++;
        }
        return ans;
    }
};
