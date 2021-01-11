class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxValue = 0, currentTotal = 0;
        for(vector<int> customer : accounts)
        {
            for(int balance : customer)
            {
                currentTotal += balance;
            }
            maxValue = max(currentTotal,maxValue);
            currentTotal = 0;
        }
        return maxValue;
    }
};
