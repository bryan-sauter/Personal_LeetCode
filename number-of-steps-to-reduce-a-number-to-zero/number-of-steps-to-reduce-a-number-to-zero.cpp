class Solution {
public:
    //there are bitwise scenarios, but to keep things realistic
    //you aren't going to remember the binary definition functions
    int numberOfSteps (int num) {
        int count = 0;
        while(num)
        {
            if(num & 1) //is it odd?
            {
                num--;
            }
            else //no so shift right one to divide by 2
            {
                num >>= 1;
            }
            count++;
        }
        return count;
    }
};
