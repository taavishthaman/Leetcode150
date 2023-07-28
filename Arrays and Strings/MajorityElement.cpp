#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> & nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        int max_frq = 0;
        int res;
        for(int i=0; i<n; i++) {
            m[nums[i]]++;
            if(m[nums[i]] > max_frq) {
                max_frq = m[nums[i]];
                res = nums[i];
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