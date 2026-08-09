class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int bucket1=0;
        int bucket2=0;
        int b1=0,b2=0;
        for(auto i:nums){
            if (bucket1==i){
                b1++;
                continue;
            }
            else if (bucket2==i){
                b2++;
                continue;
            }
            else if(!b1){
                b1=1;
                bucket1=i;
                continue;
            }
            else if(!b2){
                b2=1;
                bucket2=i;
                continue;
            }
            else{
                b1--;
                b2--;
            }
        }
        // cout<<bucket1<<" "<<bucket2<<endl;
        // cout<<b1<<" "<<b2<<endl;
        int cnt1=0,cnt2=0;
        for(auto i:nums){
            if(i==bucket1){
                cnt1++;
            }
            if(i==bucket2){
                cnt2++;
            }
        }
        vector<int> ans;
        if(cnt1>nums.size()/3){
            ans.push_back(bucket1);
        }
                if(cnt2>nums.size()/3){
            ans.push_back(bucket2);
        }
        return ans;
    }
};