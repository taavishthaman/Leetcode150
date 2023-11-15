class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> op;

        if(n < 3) {
            return op;
        }

        for(int i=0; i<n-2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int start = i+1;
            int end = n-1;

            while(start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                if(sum == 0) {
                    vector<int> v = {nums[i], nums[start], nums[end]};
                    op.push_back(v);
                    start++;
                    while(start < end && nums[start] == nums[start-1]) {
                        start++;
                    }
                } else if(sum < 0) {
                    start++;
                } else {
                    end--;
                }
            }
        }

        return op;
    }
};