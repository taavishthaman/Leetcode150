#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> & prices) {
        int n = prices.size();
        int profit = 0;
        for(int i=0; i<n-1; i++) {
            profit += max(0, prices[i+1]-prices[i]);
        }
        return profit;
    }
};

int main() {
    Solution s;
    vector<int> nums = {7,1,5,3,6,4};
    int profit = s.maxProfit(nums);
    cout<<profit<<endl;
}