class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> countStore;
        for(auto i : nums)
        {
            countStore[i]++;
            if(countStore[i] > 1)
            {
                return i;
            }
        }
        return 0;
    }
};
