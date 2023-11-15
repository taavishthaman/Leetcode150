class Solution {
public:
    bool isPalindrome(string s) {
        string op = "";
        for(char ch : s) {
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                op += tolower(ch);
            }
        }

        int n = op.size();

        for(int i=0; i<n/2; i++) {
            if(op[i] != op[n-1-i]) {
                return false;
            }
        }

        return true;
    }
};