class Solution {
public:
    bool check(string &s, bool skipLeft){
        int left=0,right=s.size()-1;
        bool skipped=0;
        while(left<right){
            if(s[left]!=s[right]){
                if(skipped){
                    return 0;
                }
                if (skipLeft){
                    left++;
                }else{
                    right--;
                }
                skipped=1;
            }
            else {
                left++;
                right--;
            }
        }
        return 1;
    }
    bool validPalindrome(string s) {
        bool left = check(s,1);
        if(left){
            return left;
        }
        return check(s,0);
    }
};