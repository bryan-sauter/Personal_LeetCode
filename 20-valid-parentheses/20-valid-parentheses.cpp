class Solution {
public:
    bool isValid(string s) {
        stack<char> pairMe;
        for(char& curr : s)
        {
            switch(curr)
            {
                case '(': pairMe.push(')'); break;
                case '{': pairMe.push('}'); break;
                case '[': pairMe.push(']'); break;
                default:
                {
                    if(pairMe.size() == 0 || curr != pairMe.top() )
                    {
                        return false;
                    }
                    else
                    {
                        pairMe.pop();
                    }
                }
            }
        }
        return pairMe.size() == 0;
    }
};