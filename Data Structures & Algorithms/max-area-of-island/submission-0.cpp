class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        // We turn each 1 we see into a 0 using dfs. 
        // If we see a new 1 then that's a new Island. 


        int n = grid.size(), m = grid[0].size();

        
        int mx = 0; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 1) {
                    int isl = 0;
                    dfs(grid, i, j, isl);
                    mx = max(mx, isl);
                }

            }
        }

        return mx;
    }


    void dfs(vector<vector<int>>& grid, int i, int j, int& isl) {

        if (j < 0 || i < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0) return;  

        isl++;
        grid[i][j] = 0;

        dfs(grid, i - 1, j, isl);
        dfs(grid, i + 1, j, isl);
        dfs(grid, i, j + 1, isl);
        dfs(grid, i, j - 1, isl);


    }

};
