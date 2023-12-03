class Solution {
public:
    void permutations(vector<int> & nums, int i, vector<vector<int>> & op) {
        if(i == nums.size()-1) {
            op.push_back(nums);
            return;
        }

        for(int j=i; j<nums.size(); j++) {
            swap(nums[i], nums[j]);
            permutations(nums, i+1, op);
            swap(nums[i], nums[j]);
        }
    }   

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> op;
        permutations(nums, 0, op);

        return op;
    }
};