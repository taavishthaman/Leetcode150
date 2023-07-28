#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int> & nums, int val) {
        int k = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] == val) {
                continue;
            }
            nums[k] = nums[i];
            k++;
        }
        
        return k;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int length = s.removeElement(nums, 2);
    for(int i=0; i<length; i++) {
        cout<<nums[i]<<", ";
    }
}