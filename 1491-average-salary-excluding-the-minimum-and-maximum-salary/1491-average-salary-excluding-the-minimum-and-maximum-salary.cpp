class Solution {
public:
    double average(vector<int>& salary) {
        set<int> sorted(salary.begin(), salary.end());
        int elements = 0;
        double total = 0.0;
        for(auto& curr : sorted)
        {
            if(elements == 0 || elements == sorted.size() - 1)
            {
                elements++;
                continue;
            }
            total += curr;
            elements++;
        }
        return total/(elements-2);
    }
};