#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m+n-1;
        int i = m-1;
        int j = n-1;

        while(i >= 0 && j >= 0) {
            if(nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }

        while(i >= 0) {
            nums1[k] = nums1[i];
            k--;
            i--;
        }

        while(j >= 0) {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
};

int main() {
    Solution s;
    vector<int> v1 = {1,2,3,0,0,0};
    vector<int> v2 = {2,5,6};
    int m = 3;
    int n = 3;
    s.merge(v1, m, v2, n);
    for(int i=0; i<m+n; i++) {
        cout<<v1[i]<<", ";
    }
}