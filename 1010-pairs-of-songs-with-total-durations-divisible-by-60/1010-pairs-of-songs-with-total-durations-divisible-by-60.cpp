class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int retCount = 0, pair = 0;
        vector<int> timePair(60,0);//track missing pairs, via how many hits
        for(const int timeVal : time)
        {
            pair = timeVal % 60;//how far are we from being divisible by 60?
            if( pair == 0 )
            {
                retCount += timePair[0];
            }
            else
            {
                retCount += timePair[60 - pair];
            }
            timePair[pair]++;
        }
        return retCount;
    }
};