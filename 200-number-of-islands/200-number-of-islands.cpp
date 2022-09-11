class Solution {
public:
    void check(vector<vector<char>>& grid, int i, int j)
    {
        if(i < 0 or i >= grid.size() or j < 0 or j >= grid[0].size() or grid[i][j] == '0')
            return;
        
        grid[i][j] = '0';
        check(grid, i + 1, j);
        check(grid, i - 1, j);
        check(grid, i, j + 1);
        check(grid, i, j - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int island = 0;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == '1')
                {
                    island++;
                    check(grid, i, j);
                }
            }
        }
        return island;
    }
};