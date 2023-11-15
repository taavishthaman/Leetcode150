class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 0);
        prefix[0] = nums[0];
        for(int i=1; i<n; i++) {
            prefix[i] = prefix[i-1] * nums[i];
        }

        int op = 1;
        for(int i=n-1; i>=1; i--) {
            prefix[i] = prefix[i-1] * op;
            op = op * nums[i];
        }
        prefix[0] = op;
        return prefix;
    }
};