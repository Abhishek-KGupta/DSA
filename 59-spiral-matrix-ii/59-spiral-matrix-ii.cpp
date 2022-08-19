class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector< vector <int>> mat (n, vector<int>(n));
        
        int startrow = 0, startcol = 0, endrow = n - 1, endcol = n - 1;
        int x = 1;
        
        while(startrow <= endrow and startcol <= endcol)
        {
            int i = startcol;
            while(i <= endcol)
                mat[startrow][i++] = x++;
            startrow++;
            
            i = startrow;
            while(i <= endrow)
                mat[i++][endcol] = x++;
            endcol--;
            
            i = endcol;
            while( i >= startcol)
                mat[endrow][i--] = x++;
            endrow--;
            
            i = endrow;
            while(i >= startrow)
                mat[i--][startcol] = x++;
            startcol++;
        }
        return mat;
    }
};