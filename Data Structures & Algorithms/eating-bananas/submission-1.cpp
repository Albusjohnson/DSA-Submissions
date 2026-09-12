class Solution {
public:
    bool solve(long long k,vector<int>&piles, long long h){
        long long total =0;
        for(auto i:piles){
            total+=ceil((i*1.0)/k);
        }
        return total<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l=1,r=1e9;
        while(l<=r){
            long long mid=l+((r-l)>>1);
            bool worked = solve(mid, piles, h);
            if(worked){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
