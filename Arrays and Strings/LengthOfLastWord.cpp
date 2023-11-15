class Solution {
public:
    int lengthOfLastWord(string s) {
        bool first_space = false;
        int isChar = false;

        string op = "";
        if(s[s.size()-1] == ' ') {
            first_space = true;
        }
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i] == ' ' && first_space) {
                continue;
            } else if(s[i] != ' ') {
                op = s[i] + op;
                first_space = false;
            } else {
                break;
            }
        }

        return op.size();
    }
};