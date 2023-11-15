class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int n = s.size();
        int res = 0;
        for(int i=0; i<n; i++) {
            if(i+1 < n && m[s[i+1]] > m[s[i]]) {
                res += (m[s[i+1]] - m[s[i]]);
                i+=1;
            } else {
                res += m[s[i]];
            }
        }

        return res;
    }
};