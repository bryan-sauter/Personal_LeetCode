class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lowerLimit = 0, upperLimit = nums.size()-1, midVal = 0;
        while(lowerLimit <= upperLimit)
        {
            midVal = lowerLimit + (upperLimit - lowerLimit) / 2;
            if( nums[midVal] < target )
            {
                lowerLimit = midVal + 1; //move left
            }
            else
            {
                upperLimit = midVal - 1; //move right
            }
        }
        return lowerLimit;
    }
};