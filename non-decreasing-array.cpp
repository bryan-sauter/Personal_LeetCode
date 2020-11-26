class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int changesTotal = 0;
        
        if( nums.size() <= 2)
        {
            return true;
        }
        
        if( nums[0] > nums[1] )
        {
            changesTotal++;
        }
    
        for( unsigned int i = 1u; i < nums.size() - 1; ++i )
        {
            if(nums.size() > i && nums.size() > i + 1 && nums[i] > nums[i + 1])
            {
                if( nums[i - 1] > nums[i + 1])
                {
                    nums[i + 1] = nums[i];
                }
                
                if( changesTotal == 1)
                {
                    return false;
                }
                
                ++changesTotal;
            }
        }
            
        return true;
    }
};
