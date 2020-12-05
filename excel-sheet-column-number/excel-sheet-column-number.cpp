class Solution {
public:
    int titleToNumber(string s) {
        return accumulate(s.begin(), s.end(), 0, 
                          [](unsigned int num, char ch) { return num * 26 + ch - 'A' + 1; }); 
    }
};
