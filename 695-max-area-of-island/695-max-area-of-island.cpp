class Solution {
public:
    int findArea(vector<vector<int>>& grid, int i, int j, int m, int n)
    {
        if(i<0 or j<0 or i>m-1 or j>n-1 or grid[i][j]!=1)
            return 0;
        grid[i][j]=0;
        return 1+findArea(grid, i+1, j, m, n)+findArea(grid, i-1, j, m, n)+findArea(grid, i, j+1, m, n)+findArea(grid, i, j-1, m, n); 
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int maxArea=0, res=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(grid[i][j]==1)
                {
                    res = findArea(grid, i, j, m, n);
                    maxArea = max(res, maxArea);
                }
        return maxArea;
    }
};