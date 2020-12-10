class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string str;
        //recursively find/permutate the solution
        permutate(result, str, n, n);
        return result;
    }
private:
    void permutate(vector<string> &result, string &str, int left, int right)
    {
        //if both n values are now 0 we are done
        //add the result and go back up the stack
        if( !left && !right )
        {
            result.push_back(str);
            return;
        }
        //if the left is still greater than 0 push a left para on
        //the recurse down minus a left needed
        //this can be done as > 0 because you always needs to start with a left
        if( left > 0 )
        {
            str.push_back('(');
            permutate(result, str, left - 1, right);
            str.pop_back();
        }
        //when the left counter is less than the right we need to add a right para
        if( left < right )
        {
            str.push_back(')');
            permutate(result, str, left, right - 1);
            str.pop_back();
        }
    }
};
