#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> & prices) {
        int n = prices.size();
        int i = 0;
        int max_profit = 0;
        for(int j=0; j<n; j++) {
            if(prices[j] < prices[i]) {
                i = j;
            }
            max_profit = max(max_profit, prices[j]-prices[i]);
        }
        
        return max_profit;
    }
};

int main() {
    Solution s;
    vector<int> nums = {7,1,5,3,6,4};
    int profit = s.maxProfit(nums);
    cout<<profit<<endl;
}