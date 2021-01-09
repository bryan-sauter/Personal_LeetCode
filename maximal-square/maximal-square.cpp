class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        unsigned int nRows = matrix.size();
        unsigned int nCols = nRows ? matrix[0].size() : 0;
        
        int copy[nRows+1][nCols+1];
        memset( copy, 0, (nCols+1)*(nRows+1)*sizeof(int) );
        int maxFound = 0;
​
        for(unsigned int i = 1; i <= nRows; ++i)
        {
            for(unsigned int j = 1; j <= nCols; ++j)
            {
                if(matrix[i-1][j-1] == '1')
                {
                    copy[i][j] = min(min(copy[i][j-1],copy[i-1][j]),copy[i-1][j-1]) + 1;
                    maxFound = max(maxFound, copy[i][j]);
                }
            }
        }
        
        return maxFound*maxFound;
    }
};
