class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
       for(int i = 0 ; i < prices.size() ; i++ ) {
            for(int j = i + 1 ; j < prices.size() ; j++) {
                int currentProfit = prices[j] - prices[i];
                
                if(currentProfit > maxProfit) {
                    maxProfit = currentProfit;
                }
            }
       } 
       return maxProfit;
    }
};
