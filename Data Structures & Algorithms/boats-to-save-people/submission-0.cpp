class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int total=0;
        int l=0,r=people.size()-1;
        while(l<r){
            if(people[l]+people[r]<=limit){
                l++;
                r--;
                total++;
            }
            else{
                r--;
                total++;
            }
        }
        return l==r?total+1:total;
    }
};