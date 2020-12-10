class Solution {
public:
    //brute force method, this can probably be done with backtracking
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result = {{}};
        for( auto num : nums)
        {
            uint size = result.size(); //missed this, needed as result changes every iteration
            for(unsigned int i = 0u; i < size; ++i)
            {
                result.push_back(result[i]);
                result.back().push_back(num);
            }
        }
        return result;
    }
};
