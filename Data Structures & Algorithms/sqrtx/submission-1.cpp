class Solution {
public:
    int mySqrt(int x) {
        int l =1,r=x;
        while(l<=r){
            long long mid= l+ ((r-l)>>1);
            long long sq = mid*mid;
            if(sq==x){
                return mid;
            }
            else if (sq>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return r;
    }
};