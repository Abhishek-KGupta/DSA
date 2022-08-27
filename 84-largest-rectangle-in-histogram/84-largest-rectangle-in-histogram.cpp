class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        stack<int> st;
        int maxArea = 0, n = heights.size(), wide;
        
        for(int i = 0; i <= n; i++)
        {
            while(!st.empty() and (i == n or heights[st.top()] >= heights[i]))
            {
                int high = heights[st.top()];
                st.pop();
                if(st.empty())
                    wide = i;
                else 
                    wide = i - st.top() - 1;
                maxArea = max(maxArea, high * wide);
            }
            st.push(i);
        }
        return maxArea;
    }
};