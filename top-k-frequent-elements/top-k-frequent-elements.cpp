class Solution {
public:
    //bucket sort
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> store;
        vector<vector<int>> bucketStore(nums.size() + 1);//0 = +1
        //populate occurance
        for(auto i : nums)
        {
            store[i]++;
        }
        //populate buckets - count -> num
        for(auto &pair : store)
        {
            bucketStore[pair.second].push_back(pair.first);
        }
        //reverse reverse, everybody clap your hands
        reverse(bucketStore.begin(), bucketStore.end());
        //populate result based on bucket store
        for(auto &bucket : bucketStore)
        {
            for(auto index : bucket)
            {
                result.push_back(index);
                if(result.size() == k)
                {
                    return result;
                }
            }
        }
        return result;
    }
};
