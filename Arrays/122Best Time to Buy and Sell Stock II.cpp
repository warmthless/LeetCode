//C
int maxProfit(int* prices, int pricesSize) {
    if (!pricesSize) return 0;
    int profit = 0;
    for(int i = 0; i < pricesSize-1; ++i){
        if((prices[i] < prices[i+1])){
            profit += prices[i+1]-prices[i];
        }
    } 
    return profit;
}
//C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, buy = INT_MAX;
        for (int price : prices) {
            buy = min(buy, price);
            res = max(res, price - buy);
        }
        return res;
    }
};
