class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //due to the question structure we can just total all day to day profits
        int result = 0;
        for(unsigned int i = 1; i < prices.size(); ++i)
        {
            result += max( prices[i] - prices[i - 1], 0);
        }
        return result;
    }
};
