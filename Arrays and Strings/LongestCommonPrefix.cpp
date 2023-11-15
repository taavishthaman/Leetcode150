class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        int len = first.size();
        int count = 0;
        while(count < len) {
            int i = 1;
            for(i=1; i<strs.size(); i++) {
                string s = strs[i];

                if(count >= s.size() || s[count] != first[count]) {
                    break;
                }
            }

            if(i < strs.size()) {
                break;
            }
            count++;
        }

        return first.substr(0, count);
    }
};