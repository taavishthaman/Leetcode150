class Solution {
public:

    bool dfs(vector<vector<char>> & board, vector<vector<int>> & visited, int i, int j, int n, int m, string word, int idx) {
        if(idx == word.size()-1 && word[idx] == board[i][j]) {
            return true;
        }

        visited[i][j] = true;
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};

        for(int k=0; k<4; k++) {
            int ni = i + dy[k];
            int nj = j + dx[k];

            if(ni >= 0 && nj >= 0 && ni < n && nj < m && !visited[ni][nj] && word[idx+1] == board[ni][nj]) {
                bool success = dfs(board, visited, ni, nj, n, m, word, idx+1);
                if(success) {
                    return true;
                }
            }
        }

        visited[i][j] = false;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(board[i][j] == word[0]) {
                    bool success = dfs(board, visited, i, j, n, m, word, 0);
                    if(success) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};