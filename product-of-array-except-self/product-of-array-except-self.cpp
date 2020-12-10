class Solution {
public:
    //brute force would be n*2
    //mutliply all elements then divide out the value at each index
    //can't use division...so there is that
    vector<int> productExceptSelf(vector<int>& nums) {
        unsigned int count = nums.size(), safeEnd = nums.size() - 1;
        vector<int> result(count,1);//if we init to zero that would be an issue :)
        unsigned int leftEdge = 1, rightEdge = 1;
        
        for(unsigned int i = 0u; i < count; ++i)
        {
            //multiply our current position by our accumulation to the left
            result[i] *= leftEdge;
            //mutliply the end minus current to move from right to left against accumulated right
            result[safeEnd - i] *= rightEdge;
            //accumulate left
            leftEdge *= nums[i];
            //accumlate right
            rightEdge *= nums[safeEnd - i];
        }
        /*consider [4,3,4]
        i = 0
        r[0] = 1, r[2] = 1, L = 4, R = 4;
        i = 1
        r[1] = 4, r[1] = 16, L = 12, R = 12;
        i = 2
        r[2] = 12, r[0] = 12, L && R doesn't matter
        r = [12, 16, 12]
        */
        return result;
    }
};
