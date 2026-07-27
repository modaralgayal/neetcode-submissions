class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        unordered_map<int, vector<char>> horiz;
        unordered_map<int, vector<char>> vert;
        unordered_map<double, vector<char>> grid;


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] != '.') {
                    // Check horizontally + add
                    if (horiz.find(i) != horiz.end()) {
                        if (find(horiz[i].begin(), horiz[i].end(), board[i][j]) != horiz[i].end()) return false; 
                    } 
                    horiz[i].push_back(board[i][j]);

                    // Check vertically + add
                    if (vert.find(j) != vert.end()) {
                        if (find(vert[j].begin(), vert[j].end(), board[i][j]) != vert[j].end()) return false; 
                    } 
                    vert[j].push_back(board[i][j]);


                    // Check grid + add
                    int idx = (i / 3) * 3 + (j / 3);
                    if (grid.find(idx) != grid.end()) {
                        if (find(grid[idx].begin(), grid[idx].end(), board[i][j]) != grid[idx].end()) return false; 
                    } 
                    grid[idx].push_back(board[i][j]);
                }
            }
        }

        return true;

    }
};
