class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ret;
        permutate(nums, 0, ret);
        return ret;
    }
private:
    void permutate(vector<int> nums, unsigned int startIndex, vector<vector<int>>& ret)
    {
        if(nums.size() == startIndex)
        {
            ret.push_back(nums);
        }
        else
        {
            for( unsigned int j = startIndex; j < nums.size(); ++j)
            {
                swap(nums[startIndex],nums[j]);
                permutate(nums, startIndex + 1, ret);
            }
        }
    }
};
