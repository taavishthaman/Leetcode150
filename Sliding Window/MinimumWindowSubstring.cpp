class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> FS(256, 0);
        vector<int> FP(256, 0);

        for(int i=0; i<t.size(); i++) {
            FP[t[i]]++;
        }
        int i = 0, j = 0, cnt = 0, start = 0;
        int min_len = INT_MAX;
        int n = s.size();
        
        for(j=0; j<n; j++) {
            char ch = s[j];
            FS[ch]++;

            if(FP[ch] != 0 && FS[ch] <= FP[ch]) {
                cnt++;
            }

            if(cnt == t.size()) {
                while(FP[s[start]] == 0 || FS[s[start]] > FP[s[start]]) {
                    FS[s[start]]--;
                    start++;
                }

                int len = j-start+1;
                if(len < min_len) {
                    min_len = min(min_len, len);
                    i = start;
                }
            }

        }

        if(min_len == INT_MAX) return "";

        return s.substr(i, min_len);
    }
};