class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;

        int res = 0;
        while(i < j) {
            int base = j-i;
            int h = min(height[i], height[j]);
            int area = base * h;

            res = max(area, res);
            if(height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return res;
    }
};