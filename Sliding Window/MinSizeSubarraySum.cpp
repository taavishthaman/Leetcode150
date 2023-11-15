class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0, j=0;

        int sum = 0;
        int min_window = INT_MAX;
        
        for(int j=0; j<n;) {
            sum += nums[j];
            
            while(sum >= target) {
                min_window = min(j-i+1, min_window);
                sum -= nums[i];
                i++;
            }

            j++;
        }

        return min_window == INT_MAX ? 0 : min_window;
    }
};