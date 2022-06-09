class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {//two pointers
        int start = 0u;
        int end = numbers.size() - 1;
        
        while( start < end )
        {
            if( target == numbers[start] + numbers[end] ) //we found it
            {
                return {start + 1, end + 1};
            }
            else if( target > numbers[start] + numbers[end] ) //too large shift right
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        
        return {};
    }
};