class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        //This is not a binary truth table, more like a clever encoding
        //0 0 0
        //1 0 1
        //0 1 2
        //1 1 3
        int n = board.size();
        int m = board[0].size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                //Calculate state for each cell
                int dx[8] = {1,1,0,-1,-1,-1,0,1};
                int dy[8] = {0,1,1,1,0,-1,-1,-1};

                int curr = board[i][j];
                int live_cells = 0;
                for(int k=0; k<8; k++) {
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    if(nx >= 0 && ny >= 0 && nx < m && ny < n && (board[ny][nx] == 1 || board[ny][nx] == 3)) {
                        live_cells++;
                    }
                }

                if(curr == 0) {
                    if(live_cells == 3) {
                        board[i][j] = 2;
                    }
                } else {
                    if(live_cells < 2 || live_cells > 3) {
                        board[i][j] = 1;
                    } else if(live_cells == 2 || live_cells == 3) {
                        board[i][j] = 3;
                    }
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(board[i][j] == 1) {
                    board[i][j] = 0;
                } else if(board[i][j] == 2) {
                    board[i][j] = 1;
                } else if(board[i][j] == 3) {
                    board[i][j] = 1;
                }
            }
        }
    }
};