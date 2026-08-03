class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> temp(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        temp[i].first = nums[i];
        temp[i].second = i;
    }
        sort(temp.begin(),temp.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            int total = temp[i].first+temp[j].first;
            if(total==target) {
                vector<int>ans= {temp[i].second,temp[j].second};
                sort(ans.begin(),ans.end());
                return ans;
            }
            else if (total>target){
                j--;
                continue;
            }
            i++;
        }
        return {-1,-1};
    }
};
