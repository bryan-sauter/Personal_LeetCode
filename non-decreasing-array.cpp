class Solution {
    //https://leetcode.com/problems/non-decreasing-array
public:
    bool checkPossibility(vector<int>& nums) {
        int maxSeen = nums[0]; //the first element is the highest we have seen
        int changeCount = 0; //how many changes have we made?
        //loop through the vector starting from the second element
        for( unsigned int i = 1u; i < nums.size(); ++i )
        {
            //are we currently less than the max we have seen
            if( nums[i] < maxSeen )
            {
                // if we are only on the first iteration or two values back is lessE to current
                if( i < 2 || nums[i - 2] <= nums[i])
                {
                    //adjust the max value seen
                    maxSeen = nums[i];
                }
                //use our one and only change
                if(++changeCount > 1)
                {
                    //we have used it twice so return false
                    return false;
                }
            }
            else // we are so adjust the max to current
            {
                maxSeen = nums[i];
            }
        }
        //if we make it here everything worked out...
        return true;
    }
};
