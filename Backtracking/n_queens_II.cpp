class Solution {
public:
    bool is_safe(vector<vector<int>> & board, int row, int col, int n) {
        int r = row-1;
        int c = col-1;

        while(r >= 0 && c >= 0) {
            if(board[r][c] == 1) {
                return false;
            }
            r--;
            c--;
        }

        r = row-1;
        c = col;

        while(r >= 0) {
            if(board[r][c] == 1) {
                return false;
            }
            r--;
        }

        r = row-1;
        c = col+1;

        while(r >= 0 && c < n) {
            if(board[r][c] == 1) {
                return false;
            }
            r--;
            c++;
        }

        return true;
    }

    int count_queens(vector<vector<int>> & board, int i, int n) {
        if(i == n) {
            return 1;
        }

        int ways = 0;

        for(int j=0; j<n; j++) {
            if(is_safe(board, i, j, n)) {
                board[i][j] = 1;
                ways += count_queens(board, i+1, n);
                board[i][j] = 0;
            }
        }

        return ways;
    }

    int totalNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n, 0));
        return count_queens(board, 0, n);
    }
};