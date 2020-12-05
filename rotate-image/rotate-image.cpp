class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //column major flip so we can swap in place, row major would be counter clockwise
        reverse(matrix.begin(), matrix.end());
        for(unsigned int outer = 0u; outer < matrix.size(); ++outer)
        {
            for(unsigned int inner = outer + 1; inner < matrix.size(); ++inner)
            {
                swap(matrix[outer][inner],matrix[inner][outer]);
            }
        }
    }
};
