class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ret;
        for(auto& curr : nums)
        {
            ret.push_back(nums[curr]);
        }
        return ret;
    }
};