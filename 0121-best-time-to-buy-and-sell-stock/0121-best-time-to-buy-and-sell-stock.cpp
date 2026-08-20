class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int profit =0;
        int mn= prices[0];
        for(int i=0;i<prices.size() ;i++){
            
            if(prices[i] < mn){
                mn= prices[i];
            }
            else profit =max(prices[i]-mn, profit);
        }
        return profit;

    }
};