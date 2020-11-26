class Solution {
    //https://leetcode.com/problems/reverse-integer
public:
    int reverse(int x) {
        int result = 0, overFlow = 0;
        //keep going till there is nothing left of the input
        while(x != 0)
        {
            //check for potential over or under flow...
            if( overFlow > INT_MAX / 10 || overFlow < INT_MIN / 10 )
                return 0;
            //add it to the tens place with remainder
            overFlow = result * 10 + (x % 10);
            //we didn't overflow celebrate!
            result = overFlow;
            //cut off the tens place
            x /= 10;
        }
        return result;
    }
};
