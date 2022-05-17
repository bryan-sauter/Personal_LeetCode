class Solution {
public:
    bool isPalindrome(string s) {//two pointers...really?
        int end = s.size() - 1;
        int start = 0;
        while(start < end)
        {
            if( !isalnum(s[start]) )//dump anything we should not be checking
            {
                start++;
                continue;
            }
            if( !isalnum(s[end]) )//dump anything we should not be checking
            {
                end--;
                continue;
            }
            if( toupper(s[start]) == toupper(s[end]) )
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};