class Solution {
public:
    vector<int> DIR = {0, 1, 0, -1, 0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int row= mat.size();
        int col= mat[0].size();
        queue<pair<int,int>> q;
        
        for(int i=0; i < row; i++)
            for(int j=0; j < col; j++)
                if(mat[i][j] == 0)
                    q.push({i, j});
                else
                    mat[i][j]=-1;
        
        while(!q.empty())
        {
            auto [r,c]=q.front();
            q.pop();
            for(int i=0; i<4; i++)
            {
                int new_r=DIR[i]+r, new_c= DIR[i+1]+c;
                if(new_r<0 or new_c<0 or new_c>col-1 or new_r>row-1 or mat[new_r][new_c]!=-1)
                    continue;
                mat[new_r][new_c] = mat[r][c]+1;
                q.push({new_r, new_c});
            }
        }
        return mat;
    }
};