class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int row[10][10]={0};
        int col[10][10]={0};
        int box[10][10]={0};
        
        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {
                if(board[r][c]=='.')
                    continue;
                int n=board[r][c]-'0';
                int b=(r/3)*3+(c/3);
                if(row[n][r] or col[c][n] or box[b][n])
                    return false;
                row[n][r]=col[c][n]=box[b][n]=true;
            }
        }
        return true;
    }
};