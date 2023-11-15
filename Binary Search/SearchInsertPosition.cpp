class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;

        int res = -1;
        while(s <= e) {
            int m = (s + e) / 2;

            if(nums[m] == target) {
                return m;
            } else if(nums[m] < target) {
                res = m;
                s = m + 1;
            } else {
                e = m - 1;
            }
        }

        return res+1;
    }
};