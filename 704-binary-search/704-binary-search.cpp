class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(unsigned int i = 0u; i < nums.size(); ++i)
        {
            if( nums[i] == target )
            {
                return i;
            }
        }
        return -1;
    }
};