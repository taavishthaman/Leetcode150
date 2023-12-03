class Solution {
public:
    void generate_parentheses(int n, int o, int c, string s, vector<string> & op) {
        if(o + c == 2 * n) {
            op.push_back(s);
            return;
        }

        if(o < n) {
            generate_parentheses(n, o+1, c, s+'(', op);
        }
        if(c < o) {
            generate_parentheses(n, o, c+1, s+')', op);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> op;
        generate_parentheses(n, 0, 0, "", op);
        return op;
    }
};