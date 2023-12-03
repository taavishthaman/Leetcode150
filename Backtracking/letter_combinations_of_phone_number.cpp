class Solution {
public:

    void find_combinations(vector<string> & keypad, string digits, string str, int i, vector<string> & op) {
        if(i == digits.size()) {
            op.push_back(str);
            return;
        }

        int digit = digits[i] - '0';

        string letters = keypad[digit];

        for(char ch : letters) {
            find_combinations(keypad, digits, str+ch, i+1, op);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> op;

        if(digits.size() == 0) {
            return op;
        }

        find_combinations(keypad, digits, "", 0, op);

        return op;
    }
};