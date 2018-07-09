//20 ms
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty()) return false;     
        int m = board.size(), n = board.size();
        vector<vector<bool>> row(m,vector<bool>(n,false));
        vector<vector<bool>> col(m,vector<bool>(n,false));
        vector<vector<bool>> cell(m,vector<bool>(n,false));
        for(int i = 0; i< m; ++i){
            for(int j = 0; j < n; ++j){
                if(board[i][j] >= '1' && board[i][j] <= '9'){
                   int c = board[i][j] - '1';
                    if(row[i][c] || col[c][j] || cell[3*(i/3)+(j/3)][c]) return false;
                    row[i][c] = true;
                    col[c][j] = true;
                    cell[3*(i/3)+(j/3)][c] = true;
                }
            }
        }
        return true;
    }
};
