class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if(k == 0)
            return;
        vector<int> temp(nums.size(), 0);
        for(unsigned int i = 0u; i < nums.size(); ++i)
        {
            if( (i + k) <= (nums.size()-1) )
            {
                temp[i + k] = nums[i];
            }
            else
            {
                temp[(i + k) - (nums.size())] = nums[i];
            }
        }
        nums = temp;
    }
};