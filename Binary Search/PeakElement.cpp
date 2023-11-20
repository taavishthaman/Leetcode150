class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;

        while(s <= e) {
            int m = (s + e) / 2;

            if(m > 0 && nums[m-1] > nums[m]) {
                e = m - 1;
            } else if(m < n-1 && nums[m+1] > nums[m]) {
                s = m + 1;
            } else {
                return m;
            }
        }

        return -1;
    }
};