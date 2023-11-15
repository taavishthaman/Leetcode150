class Solution {
public:

    vector<string> tokenize(string s) {
        stringstream ss(s);
        string token;
        vector<string> op;

        while(getline(ss, token, ' ')) {
            if(token == "") continue;
            op.push_back(token);
        }

        return op;
    }

    string reverseWords(string s) {
        vector<string> tokens = tokenize(s);

        reverse(tokens.begin(), tokens.end());

        string op = "";
        for(string token : tokens) {
            op += token;
            op += " ";
        }

        op.pop_back();
        return op;
    }
};