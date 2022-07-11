class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int x=mat.size(), y=mat[0].size();
        if(x*y != r*c)
            return mat;
        vector<vector<int>> res (r, vector<int> (c));
        for(int i=0;i<r*c;i++)
            res[i/c][i%c]=mat[i/y][i%y];
    return res;
    }
};