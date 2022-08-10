class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        
        for(auto x: intervals)
        {
            if(x[0] <= temp[1])
                temp[1] = max(x[1], temp[1]);
            
            else
            {
                res.push_back(temp);
                temp = x;
            }
        }
        res.push_back(temp);
        return res;
    }
};