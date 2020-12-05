class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //they can be matched by sorting the characters in the input strings
        vector<vector<string>> result;
        unordered_map<string,vector<string>> stringStore;
        for(auto s : strs)
        {
            //we need to save state;
            string sorted = s;
            sort(sorted.begin(),sorted.end());
            stringStore[sorted].push_back(s);
        }
        for(auto pair : stringStore)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};
