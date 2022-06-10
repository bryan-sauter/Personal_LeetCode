class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.length() - 1; i >= 0; --i)
        {
            if( s[i] != ' ' )
            {
                count++;
            }
            else if( s[i] == ' ' && count)
            {
                break;
            }
        }
        return count;
    }
};