class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> tracker(amount + 1, INT_MAX);
        tracker[0] = 0;
        sort(coins.begin(), coins.end());
        cout << tracker.size() << endl;
        for(int i = 1; i < amount + 1; ++i)
        {            
            for(int currCoin : coins)
            {
                if( i - currCoin < 0 ) //check for negative indexes aka coins that won't exist
                {
                    break;
                }
                if( tracker[i - currCoin] != INT_MAX )
                {
                    tracker[i] = min(tracker[i], 1 + tracker[i - currCoin]);
                }
            }
        }
        
        return tracker[amount] == INT_MAX ? -1 : tracker[amount];
    }
};