class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size(), left=0, right=n-1, ans=0;
        
        while(left<right)
        {
            int width=right-left;
            int high=min(height[left], height[right]);
            ans= max(ans, width*high);
            if(height[left]<height[right])
                left++;
            else if(height[right]<height[left])
                right--;
            else {
                right--;
                left++;
            }
        }
        return ans;
    }
};