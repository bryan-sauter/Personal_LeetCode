class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.empty()) return;
        unsigned int left = 0, right = s.size() - 1;
        while( left < right )//loop while there are items to swap
        {
            char temp = s[left];//store off left most position
            s[left++] = s[right];//swap left most with the current right most position, increment left
            s[right--]= temp;//swap right most with the left most position, decrement right
        }
    }
};
