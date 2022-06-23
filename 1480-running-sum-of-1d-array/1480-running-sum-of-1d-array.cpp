class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ret(0, nums.size());
        if(nums.size() == 1)
            return nums;
        
        for(unsigned int i = 0; i < nums.size(); ++i)
        {
            if(i > 0)
            {
                ret.push_back(nums[i] + ret.back());
            }
            else
            {
                ret.push_back(nums[i]);
            }
        }
        return ret;
    }
};