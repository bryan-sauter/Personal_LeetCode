class Solution {
public:
    string interpret(string command) {
        string ret;
        for(int i = 0; i < command.length(); ++i)
        {
            if(command[i] == 'G')
            {
                ret += "G";
            }
            else if(command[i] == '\(' &&
                    command[i+1] == ')')
            {
                ret += "o";
                ++i;
            }
            else
            {
                ret += "al";
                i += 3;
            }
        }
        return ret;
    }
};
