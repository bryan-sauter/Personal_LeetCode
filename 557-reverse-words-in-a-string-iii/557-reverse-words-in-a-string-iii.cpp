class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        //keep a second index to where the previous word began for the reverse
        for(unsigned int k = 0u; k < s.length(); ++k)
        {
            if( s[k] == ' ' )
            {
                reverse(s.begin() + i, s.begin() + k);
                i = k + 1;
            }
        }
        reverse(s.begin() + i, s.end());
        return s;
    }
};