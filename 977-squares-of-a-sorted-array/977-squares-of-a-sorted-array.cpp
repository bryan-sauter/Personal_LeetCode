class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> retVal;
        for(auto& val : nums)
        {
            retVal.insert(val*val);
        }
        return vector<int>(retVal.begin(), retVal.end());
    }
};