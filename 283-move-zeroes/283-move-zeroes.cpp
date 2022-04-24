class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int curSwap = 0;
        for(unsigned int i = 0u; i < nums.size(); ++i)
        {
            if(nums[i] != 0)
            {
                swap(nums[i], nums[curSwap]);
                curSwap++;
            }
        }
    }
};