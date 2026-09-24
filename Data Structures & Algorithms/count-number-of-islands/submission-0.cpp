class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        // We turn each 1 we see into a 0 using dfs. 
        // If we see a new 1 then that's a new Island. 


        int n = grid.size(), m = grid[0].size();

        int isl = 0; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == '1') {
                    isl++;
                    dfs(grid, i, j);
                }

            }
        }

        return isl;
    }


    void dfs(vector<vector<char>>& grid, int i, int j) {

        if (j < 0 || i < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0') return;  

        grid[i][j] = '0';


        dfs(grid, i - 1, j);
        dfs(grid, i + 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);


    }

};
