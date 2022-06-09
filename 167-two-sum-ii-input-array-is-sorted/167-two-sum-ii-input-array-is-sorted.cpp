class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {//two pointers
        int start = 0u;
        int end = numbers.size() - 1;
        
        while( start < end )
        {
            if( numbers[start] + numbers[end] == target ) //we found it
            {
                return {start + 1, end + 1};
            }
            else if( numbers[start] + numbers[end] > target ) //too large shift left
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        
        return {};
    }
};