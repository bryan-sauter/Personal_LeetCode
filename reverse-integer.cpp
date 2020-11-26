class Solution {
public:
    int reverse(int x) {
        int result = 0, overFlow = 0;
        //keep going till there is nothing left of the input
        while(x != 0)
        {
            //add it to the tens place
            cout << overFlow << endl;
            cout << (overFlow > INT_MAX / 10) << endl;
            cout << (overFlow < INT_MIN / 10) << endl;
            if( overFlow > INT_MAX / 10 || overFlow < INT_MIN / 10 )
                return 0;
            overFlow = result * 10 + (x % 10);
            //we didn't overflow celebrate!
            result = overFlow;
            //cut off the tens place
            x /= 10;
        }
        return result;
    }
};
