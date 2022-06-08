class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> countStore;
        for(auto i : nums)
        {
            countStore[i]++;
            if(countStore[i] == 2)
            {
                return true;
            }
        }
        return false;
    }
};