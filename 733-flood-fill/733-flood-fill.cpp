class Solution {
public:
    void fill(vector<vector<int>>& image, int sr, int sc,int curr, int color)
    {
        if(sr<0 or sc<0 or sr>image.size()-1 or sc>image[0].size()-1 or image[sr][sc]==color or image[sr][sc]!=curr)
            return;
        
        image[sr][sc]=color;
        fill(image, sr+1, sc, curr, color);
        fill(image, sr-1, sc, curr, color);
        fill(image, sr, sc+1, curr, color);
        fill(image, sr, sc-1, curr, color);
    }
        
        
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int curr=image[sr][sc];
        fill(image, sr, sc, curr, color);
        return image;
    }
};