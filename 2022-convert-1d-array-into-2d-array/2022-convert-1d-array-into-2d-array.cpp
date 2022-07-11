class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        vector<vector<int>> res(m, vector<int>(n));
        if(m*n!=original.size())
            return {};
        int x=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                res[i][j]=original[x++];
        return res;
    }
};