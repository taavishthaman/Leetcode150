#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> temp;
        
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            } else {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i < m) {
            temp.push_back(nums1[i]);
            i++;
        }
        
        while(j < n) {
            temp.push_back(nums2[j]);
            j++;
        }
        
        for(i=0; i<m+n; i++) {
            nums1[i] = temp[i];
        }
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