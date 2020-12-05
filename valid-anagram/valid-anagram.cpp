class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> charStore;
        if( s.length() != t.length()) return false;
        for(unsigned int i = 0u; i < s.length(); ++i)
        {
            charStore[s.at(i)]++;
            charStore[t.at(i)]--;
        }
        for(auto count : charStore)
        {
            if(count.second)
            {
                return false;
            }
        }
        return true;
    }
};
