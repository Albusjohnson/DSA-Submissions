class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=INT_MAX;
        int profit=0;
        for(auto i:prices){
            if(i<price){
                price=i;
                continue;
            } 
            profit+=i-price;
            price=i;
        }
        return profit;
    }
};