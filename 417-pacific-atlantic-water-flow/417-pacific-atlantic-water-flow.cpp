class Solution {
public:
    void dfs(int r, int c, vector<vector<bool>>& visit, int row, int col, vector<vector<int>>& heights)
    {
        visit[r][c] = true;
        
        if(r > 0 and visit[r - 1][c] == false and heights[r - 1][c] >= heights[r][c])
            dfs(r - 1, c, visit, row, col, heights);
        
        if(r < row - 1 and visit[r + 1][c] == false and heights[r + 1][c] >= heights[r][c])
            dfs(r + 1, c, visit, row, col, heights);
        
        if(c > 0 and visit[r][c - 1] == false  and heights[r][c - 1] >= heights[r][c])
            dfs(r, c - 1, visit, row, col, heights);
            
        if(c < col - 1 and visit[r][c + 1] == false  and heights[r][c + 1] >= heights[r][c])
            dfs(r, c + 1, visit, row, col, heights);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
    {
        int row = heights.size();
        int col = heights[0].size();
        
        vector<vector<bool>> pac(row, vector<bool> (col, false));
        vector<vector<bool>> atl(row, vector<bool> (col, false));
        vector<vector<int>> res;
        
        for(int c = 0; c < col; c++)
        {
            dfs(0, c, pac, row, col, heights);
            dfs(row - 1, c, atl, row, col, heights);
        }
        
        for(int r = 0; r < row; r++)
        {
            dfs(r, 0, pac, row, col, heights);
            dfs(r, col - 1, atl, row, col, heights);
        }
        
        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                if(atl[i][j] == true and pac[i][j] == true)
                    res.push_back({i, j});
        return res;
    }
};