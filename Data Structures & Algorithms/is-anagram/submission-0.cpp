class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int> mp;
        if (s.size()!=t.size()){
            return 0;
        }
        for(char i:s){
            mp[i-'a']++;
        }
        for(auto i: t){
            if(!mp[i-'a']){
                return 0;
            }
            mp[i-'a']--;
        }
        return 1;
    }
};
