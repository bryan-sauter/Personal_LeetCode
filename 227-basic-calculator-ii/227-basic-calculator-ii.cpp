class Solution {
public:
    int calculate(string s) {
        istringstream read('+' + s + '+');//ignore whitespace for free and start/end on op
        long total = 0, curr = 0, divMut = 0; //to keep order of operations you need to do ops seperate, hence first test case
        char op;
        while ( read >> op )
        {
            if( op == '+' || op == '-')
            {
                total += curr;
                read >> curr;
                curr *= op == '+' ? 1 : -1;
            }
            else
            {
                read >> divMut;
                if( op == '*' )
                {
                    curr *= divMut;
                }
                else
                {
                    curr /= divMut;
                }
            }
        }
        return total;
    }
};