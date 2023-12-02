class Solution {
public:

    bool is_safe(vector<vector<char>> & board, char ch, int i, int j, int n) {
        //Check row and col
        for(int k=0; k<n; k++) {
            if((board[i][k] == ch || board[k][j] == ch) && k != i and k !=j){
                return false;
            }
        }

        //Check 3X3 submatrix
        int r = (i/3) * 3;
        int c = (j/3) * 3;

        for(int row=r; row<r+3; row++) {
            for(int col=c; col<c+3; col++) {
                if(row == i && col == j) {
                    continue;
                }
                if(board[row][col] == ch) {
                    return false;
                }
            }
        }

        return true;
    }

    bool is_valid(vector<vector<char>> & board, int n) {
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(board[i][j] != '.') {
                    char ch = board[i][j];
                    bool safe = is_safe(board, ch, i, j, n);
                    if(!safe) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        return is_valid(board, n);
    }
};