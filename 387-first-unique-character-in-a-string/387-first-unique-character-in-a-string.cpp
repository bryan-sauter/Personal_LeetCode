class Solution {
public:
    int firstUniqChar(string s) {
        int charOcc[26] = {0};
        for(const char& val : s)
        {
            charOcc[val - 'a']++;
        }
        
        for(unsigned int i = 0u; i < s.length(); ++i)
        {
            if( charOcc[s[i] - 'a'] == 1 )
            {
                return i;
            }
        }
        return -1;
    }
};