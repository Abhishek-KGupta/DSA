class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row=matrix.size(), col=matrix[0].size(), low=0, high=row*col-1, mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            int x=matrix[mid/col][mid%col];
            if(x==target)
                return true;
            if(x<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};