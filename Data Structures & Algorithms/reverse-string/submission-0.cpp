class Solution {
public:
    void reverseString(vector<char>& s) {
        int cp=s.size()/2;
        int i=0;
        while(i<cp){
            swap(s[i], s[s.size()-i-1]);
            i++;
        }
        return;
    }
};