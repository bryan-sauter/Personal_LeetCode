class Solution {
public:
    int search(vector<int>& nums, int target) {//fun fact sequential still passes
        int low = 0, high = nums.size() - 1, mid = 0;
        
        while (low <= high)
        {
            mid = low + (high - low) / 2;//prevent overflow
            if(target == nums[mid])
            {
                return mid;
            }
            else if(target > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }
};