class Solution {
public:
    int minPartitions(string n) {
        //basic assumptions
        //if you had a number like 25
        //how many binary numbers would it take to make 25?
        //11
        //11 - 22
        //1 - 23
        //1 - 24
        //1 - 25
        return *max_element(begin(n), end(n)) - '0';
    }
};