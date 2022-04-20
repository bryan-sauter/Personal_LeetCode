class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> checkedVals(nums.size());
        for(const int& val : nums)
        {
            auto[iter, notDup] = checkedVals.insert(val);
            if(!notDup)
            {
                return true;
            }
        }
        return false;
    }
};