class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int i = 0,  j = col - 1;
        
        while(i < row and j >= 0)
        {
            if(matrix[i][j] == target)
                return true;
            
            target  > matrix[i][j] ? i++ : j--;  
        }
        return false;
    }
};