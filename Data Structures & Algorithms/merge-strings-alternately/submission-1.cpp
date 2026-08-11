class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        bool left=1;
        int w1=0,w2=0;
        for(int i=0;i<word1.size()+word2.size();i++){
            if(left){
                if(w1<word1.size()){
                    ans+=word1[w1];
                    w1++;
                }
                else{
                    ans+=word2[w2];
                    w2++;
                }
            }
            else{
                if(w2<word2.size()){
                    ans+=word2[w2];
                    w2++;
                }
                else{
                    ans+=word1[w1];
                    w1++;
                }
            }
            left=1-left;
        }
        return ans;
    }
};