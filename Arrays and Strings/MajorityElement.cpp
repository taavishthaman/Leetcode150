#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> & nums) {
        int res = 0;
        int count = 0;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(count == 0) {
                res = nums[i];
                count++;
            } else {
                if(nums[i] == res) {
                    count++;
                } else {
                    count--;
                }
            }
        }

        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<s.majorityElement(nums)<<endl;
}