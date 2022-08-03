class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int height = triangle.size();
        int len = triangle[height-1].size(); // largest length of triangle i.e. base
        vector<int> path;
        
        for(int ele = 0; ele < len; ele++) // for filling the path with the elements of last layer of triangle
            path.push_back(triangle[height-1][ele]);
        
        for(int curr_layer = height-2; curr_layer >= 0; curr_layer--) // we start calculating path sum from the 2nd last layer since the sum of last layer is the layer itself
        {
            for(int ele = 0; ele < triangle[curr_layer].size(); ele++)
            {
                path[ele] = min(path[ele], path[ele+1]) + triangle[curr_layer][ele];
            }
        }
        
        return path[0];
    }
};