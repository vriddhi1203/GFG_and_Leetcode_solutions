//..................O(N) appraoch......................//
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


//...........................O(N2) approach......................//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit,maxiprofit=0;
        for(int i=0;i<prices.size();i++){
            int k=prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(k<prices[j]){
                     profit=prices[j]-k;
                     maxiprofit=max(maxiprofit,profit);
                }
            }
        }
        return maxiprofit;
    }
};