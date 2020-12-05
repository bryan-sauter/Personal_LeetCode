class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        int three = 0, five = 0;
        for(unsigned int i = 1; i <= n; ++i)
        {
            three = i % 3;
            five  = i % 5;
            if( !three && !five )
            {
                result.push_back("FizzBuzz");
            }
            else if( !three )
            {
                result.push_back("Fizz");
            }
            else if ( !five )
            {
                result.push_back("Buzz");
            }
            else
            {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};
