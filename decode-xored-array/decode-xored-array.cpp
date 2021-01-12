class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decoded = {first};
        for(int& curr : encoded)
        {
            decoded.push_back(first ^= curr);
        }
        return decoded;
    }
};
