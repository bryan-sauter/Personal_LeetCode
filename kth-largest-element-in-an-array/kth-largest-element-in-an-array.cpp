class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> 
            q( nums.begin(), nums.begin() + k);
​
        for( unsigned int i = k; i < nums.size(); ++i )
        {
            //keep replacing the top if our current is higher
            //cout << nums[i] << endl << q.top() << endl;
            if( nums[i] > q.top() )
            {
                q.pop();
                q.push(nums[i]);
            }
        }
        
        return q.top();
    }
};
