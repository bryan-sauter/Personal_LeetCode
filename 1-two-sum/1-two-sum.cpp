class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> needsMap;

        for(int i = 0; i < nums.size(); ++i)
        {
            if(auto idx = needsMap.find(nums[i]); idx != needsMap.end())
            {
                result.push_back(idx->second);
                result.push_back(i);
                return result;
            }
            needsMap.emplace(make_pair(target - nums[i], i));
        }
        return result;
    }
};