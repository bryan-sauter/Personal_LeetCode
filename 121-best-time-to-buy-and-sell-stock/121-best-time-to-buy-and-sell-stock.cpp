class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minStock = INT_MAX, maxTotal = 0;
        for(unsigned int i = 0u; i < prices.size(); ++i)
        {
            minStock = min(minStock, prices[i]); //track the lowest price seen
            //track the max profit, this would capture the max saw even if minStock changes
            maxTotal = max(maxTotal, prices[i] - minStock);
        }
        return maxTotal;
    }
};