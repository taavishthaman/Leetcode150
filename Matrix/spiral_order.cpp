class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int sr = 0, sc = 0, er = n-1, ec = m-1;
        vector<int> op;

        while(sr <= er && sc <= ec) {
            for(int col=sc; col <= ec; col++) {
                op.push_back(matrix[sr][col]);
            }

            for(int row=sr+1; row<=er; row++) {
                op.push_back(matrix[row][ec]);
            }

            for(int col=ec-1; col>=sc; col--) {
                if(sr == er) break;
                op.push_back(matrix[er][col]);
            }

            for(int row=er-1; row>=sr+1; row--) {
                if(sc == ec) break;
                op.push_back(matrix[row][sc]);
            }

            sr++;
            sc++;
            er--;
            ec--;
        }

        return op;
    }
};