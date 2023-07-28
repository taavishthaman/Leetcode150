#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> & nums) {
        int n = nums.size();
        int i=0, k=0, count=1;
        
        for(i=0; i<n-1; i++) {
            if(nums[i] != nums[i+1]) {
                if(count == 1) {
                    nums[k++] = nums[i];
                }
                else if(count >= 2) {
                    nums[k++] = nums[i];
                    nums[k++] = nums[i];
                }
                count = 1;
            } else {
                count++;
            }
        }
        
        if(count == 1) {
            nums[k++] = nums[i];
        }
        else if(count >= 2) {
            nums[k++] = nums[i];
            nums[k++] = nums[i];
        }
        
        return k;
    }
};

int main() {
    Solution s;
    vector<int> v = {0,0,1,1,1,1,2,3,3};
    int length = s.removeDuplicates(v);
    for(int i=0; i<length; i++) {
        cout<<v[i]<<", ";
    }
}