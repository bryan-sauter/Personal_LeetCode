class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        unsigned int head = 0u; //ref frame of last non-zero
        for(unsigned int i = 0u; i < nums.size(); ++i)
        {
            //non-zero element
            if(nums[i] != 0)
            {
                //increment the nonzero ref and swap with current
                swap(nums[head++], nums[i]);
            }
        }
        
    }
};
