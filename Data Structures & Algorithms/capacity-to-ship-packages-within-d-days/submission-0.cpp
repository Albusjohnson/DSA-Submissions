class Solution {
public:
    bool solve(long long capacity,vector<int>&piles, long long h){
        long long total =1;
        long long current =capacity;
        for(auto i:piles){
            if(current>=i){
                current-=i;
            }
            else{
                total++;
                current=capacity-i;
            }
        }
        // cout<<total<<" "<<capacity<<endl;
        return total<=h;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int mx=0;
        for(auto i: weights){
            mx=max(i,mx);
        }
        long long l=mx,r=1e9;
        while(l<=r){
            long long mid=l+((r-l)>>1);
            bool worked = solve(mid, weights, days);
            if (mid<=10){
                cout<<mid<<" "<<worked<<endl;
            }
            if(worked){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
        // solve(5, weights, days);
        return 0;
    }
};