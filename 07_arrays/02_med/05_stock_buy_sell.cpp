class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0, minPrice = INT_MAX;
        for(auto price : prices){
            if(price < minPrice)
                minPrice = price;
            else
                maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};