class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool horiz[9][9] = {false};
        bool vert[9][9] = {false};
        bool grid[9][9] = {false};


        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
               if (board[i][j] == '.') continue; 
               int val = board[i][j] - '1';

               if (horiz[i][val] || vert[j][val] || grid[ (i/3)*3 + (j/3) ][val]) return false;

               horiz[i][val] = vert[j][val] = grid[ (i/3)*3 + (j/3) ][val] = true; 
            }
        }

        return true;

    }
};
