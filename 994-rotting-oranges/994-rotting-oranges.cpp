class Solution {
public:
    vector<int> DIR={-1, 0, 1, 0, -1};
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int row = grid.size(), col = grid[0].size();
        queue<pair <int, int>> q;
        int fresh=0;
            
        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                if(grid[i][j] == 2)
                    q.push({i, j});
                else if(grid[i][j] == 1)
                    fresh++;
        
        int ans=-1;
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                auto [r,c] = q.front();
                q.pop();
                for(int i = 0; i < 4; i++)
                {
                    int new_r = r + DIR[i], new_c = c + DIR[i+1];
                    if(new_r<0 or new_c<0 or new_r>row-1 or new_c>col-1 or grid[new_r][new_c]!=1)
                        continue;
                    grid[new_r][new_c]=2;
                    q.push({new_r, new_c});
                    fresh--; 
                }
            }
            ans++;
        }
        
        if(fresh>0)
            return -1;
        if(ans==-1)
            return 0;
        return ans;
    }
};