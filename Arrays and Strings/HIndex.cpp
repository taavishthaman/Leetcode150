int hIndex(vector<int>& citations) {
    int max_value = 0;
    for(int num : citations) {
        max_value = max(max_value, num);
    }

    vector<int> dp(max_value+1, 0);

    for(int num : citations) {
        for(int j=0; j<=num; j++) {
            dp[j]++;
        }
    }

    int res = 0;
    for(int i=0; i<=max_value; i++) {
        if(i <= dp[i]) {
            res = max(res, i);
        }
    }

    return res;
}