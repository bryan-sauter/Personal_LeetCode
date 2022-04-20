// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lowerLimit = 1, upperLimit = n;
        int mid = 0; //start looking from the middle
        while (lowerLimit < upperLimit)
        {
            //prevent overflow of high values, determine the middle of our current position
            mid = lowerLimit + (upperLimit - lowerLimit) / 2;
            //check if version is bad
            if(!isBadVersion(mid))
            {
                lowerLimit = mid + 1;
            }
            else
            {
                upperLimit = mid;
            }
        }
        return lowerLimit;
    }
};