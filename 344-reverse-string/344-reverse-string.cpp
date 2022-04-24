class Solution {
public:
    void reverseString(vector<char>& s) {
        for(unsigned int i = 0u; i < s.size() / 2; ++i)
        {
            swap(s[i], s[s.size()-1-i]);
        }
    }
};