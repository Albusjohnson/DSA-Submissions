class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int bucket=-1;
        int cnt=0;
        for(auto i: nums){
            if(bucket==i){
                cnt++;
            }
            else if(!cnt){
                bucket=i;
                cnt=1;
            }
            else{
                cnt--;
            }
        }
        return bucket;
    }
};