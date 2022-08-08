class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        
        vector<int> res;
        if(matrix.size() == 0 or matrix[0].size() == 0) return res;
        
        int top = 0;
        int left = 0;
        int bottom = matrix.size() - 1;
        int right = matrix[0].size() - 1;
        
        while(true)
        {
            for(int i = left; i <= right; i++)
                res.push_back(matrix[top][i]);
            top++;
            if(top > bottom or left > right)
                break;
            
            for(int i = top; i <= bottom; i++)
                res.push_back(matrix[i][right]);
            right--;
            if(top > bottom or left > right)
                break;
            
            for(int i = right; i >= left; i--)
                res.push_back(matrix[bottom][i]);
            bottom--;
            if(top > bottom or left > right)
                break;
            
            for(int i = bottom; i >= top; i--)
                res.push_back(matrix[i][left]);
            left++;
            if(top > bottom or left > right)
                break;
            
        }
        
        return res;
    }
};