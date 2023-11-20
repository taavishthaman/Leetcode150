class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int res = nums[0];
        while(s <= e) {
            //Check if search space is sorted
            if(nums[s] < nums[e]) {
                res = min(res, nums[s]);
                break;
            }

            int mid = (s + e) / 2;
            res = min(res, nums[mid]);
            if(nums[s] <= nums[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return res;
    }
};