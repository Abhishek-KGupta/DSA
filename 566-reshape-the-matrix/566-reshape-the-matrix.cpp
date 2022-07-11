class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        if(mat.size()*mat[0].size() != r*c)
            return mat;
        vector<vector<int>> res (r, vector<int> (c));
        vector<int> temp(r*c);
        int x=0;
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++)
                temp[x++]=mat[i][j];
        x=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                res[i][j]=temp[x++];
    return res;
    }
};