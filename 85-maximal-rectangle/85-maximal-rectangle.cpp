class Solution {
public:
    int maxHisto(vector<int>& height)
    {
        stack<int> st;
        int maxA = 0, high, wide;
        int n = height.size();
        
        for(int i = 0; i <= n; i++)
        {
            while(!st.empty() and (i == n or height[st.top()] >= height[i]))
            {
                high = height[st.top()];
                st.pop();
                if(st.empty())
                    wide = i;
                else
                    wide = i - st.top() - 1;
                maxA = max(maxA, high * wide);
            }
            st.push(i);
        }
        return maxA;
    }
        
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> height(matrix[0].size(), 0);
        int maxArea = 0;
        
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == '1')
                    height[j]++;
                else
                    height[j] = 0;
            }
            maxArea = max(maxArea, maxHisto(height));
        }
        return maxArea;
    }
};