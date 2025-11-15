class Solution {
private:
    bool dfs(vector<vector<char>>& board, string& word, int m, int n, vector<vector<bool>>& visited, int i) {
        if (i == word.length()) return true;
        int rows = board.size(), cols = board[0].size();
        if (m < 0 || m >= rows || n < 0 || n >= cols) return false;
        if (visited[m][n] || board[m][n] != word[i]) return false;

        visited[m][n] = true;
        bool found = dfs(board, word, m+1, n, visited, i+1) ||
                     dfs(board, word, m-1, n, visited, i+1) ||
                     dfs(board, word, m, n+1, visited, i+1) ||
                     dfs(board, word, m, n-1, visited, i+1);
        visited[m][n] = false;
        return found;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size(), cols = board[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        for(int i=0; i<rows; ++i) {
            for(int j=0; j<cols; ++j) {
                if(dfs(board, word, i, j, visited, 0)) return true;
            }
        }
        return false;
    }
};