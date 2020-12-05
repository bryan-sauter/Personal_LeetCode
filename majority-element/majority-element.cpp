class Solution {
public:
    int majorityElement(vector<int>& nums) {
        auto majElement = make_pair(INT_MIN,0);
        unordered_map<int, int> count;
        for(auto i : nums)
        {
            count[i]++;
            if(count[i] > majElement.second)
            {
                majElement.first = i;
                majElement.second = count[i];
            }
        }
        return majElement.second > nums.size() / 2 ? majElement.first : 0;
    }
};
