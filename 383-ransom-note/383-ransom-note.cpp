class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //build a list of how many times a value occurs
        int alpha[26] = {0};
        for(char& c : magazine)
        {
            alpha[c - 'a']++;
        }
        
        for(char& c: ransomNote)
        {
            alpha[c - 'a']--;
            if( alpha[c - 'a'] < 0 )
            {
                return false;
            }
        }
        
        
        return true;
    }
};