class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, char> m;
        m[1] = 'I';
        m[5] = 'V';
        m[10] = 'X';
        m[50] = 'L';
        m[100] = 'C';
        m[500] = 'D';
        m[1000] = 'M';
 
        //1994 -> 
        int power = 1;
        string op = "";
        while(num > 0) {
            int rem = (num % 10) * power;
            int half = (power * 10) / 2;
            int full = power * 10;
            if(rem == half) {
                op = m[half] + op;
            } else if(rem < half) {
                if(rem == half - power) {
                    op = m[half] + op;
                    op = m[power] + op;
                } else {
                    for(int i=power; i<=rem; i+=power) {
                        op = m[power] + op;
                    }
                }
            } else {
                if(rem == full-power) {
                    op = m[full] + op;
                    op = m[power] + op;
                } else {
                    for(int i=power; i<=rem-half; i+=power) {
                        op = m[power] + op;
                    } 
                    op = m[half] + op;
                }
            }
            power *= 10;
            num = num / 10;
        }

        return op;
    }
};