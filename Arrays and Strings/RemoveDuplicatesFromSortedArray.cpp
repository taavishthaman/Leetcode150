#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k=0, i=0;
        
        for(i=0; i<n-1; i++) {
            if(nums[i] != nums[i+1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        nums[k] = nums[i];
        return k+1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int length = s.removeDuplicates(nums);
    for(int i=0; i<length; i++) {
        cout<<nums[i]<<", ";
    }
}