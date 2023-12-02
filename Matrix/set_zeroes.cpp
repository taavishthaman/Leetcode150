class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> pv;

        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == 0) {
                    pair<int, int> p = {i, j};
                    pv.push_back(p);
                }
            }
        }

        for(int i=0; i<pv.size(); i++) {
            int r = pv[i].first;
            int c = pv[i].second;

            //Reset the column
            for(int j=0; j<n; j++) {
                matrix[j][c] = 0;
            }

            //Reset the row
            for(int j=0; j<m; j++) {
                matrix[r][j] = 0;
            }
        }
    }
};