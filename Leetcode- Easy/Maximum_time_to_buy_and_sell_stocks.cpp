class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=INT_MIN,min=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min)
                min=prices[i];
            int profit=prices[i]-min;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};