class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int running_max = 0;
        int cur_max = INT_MIN;
        //kadanes
        for(int& i : nums)
        {
            running_max = max(i, i + running_max);
            cur_max = max(running_max, cur_max);
        }
        
        return cur_max;
    }
};