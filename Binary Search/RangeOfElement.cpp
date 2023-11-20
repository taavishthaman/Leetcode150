class Solution {
public:
    int lower_bound(vector<int> & nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;

        int r = -1;
        while(s <= e) {
            int mid = (s + e) / 2;
            if(nums[mid] == target) {
                r = mid;
                e = mid - 1;
            }
            else if(target < nums[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return r;
    }

    int upper_bound(vector<int> & nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;

        int r = -1;
        while(s <= e) {
            int mid = (s + e) / 2;
            if(nums[mid] == target) {
                r = mid;
                s = mid + 1;
            }
            else if(target < nums[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return r;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lower_bound(nums, target);
        if(l == -1) {
            return {-1,-1};
        }
        int r = upper_bound(nums, target);
        return {l, r};
    }
};