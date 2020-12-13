class Solution {
public:
    //brute force method lol
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        
        if(numRows)
        {
            result[0].push_back(1);
        }
        
        for( unsigned int i = 1; i < numRows; ++i )
        {
            //preallocate and max sure its preallocated with 1 since begin and end
            //are always 1
            result[i] = vector(i + 1, 1);
            
            for( unsigned int j = 1; j < i; ++j )
            {
                //look at the previous row and combine left and current value
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }
        
        return result;
    }
};
