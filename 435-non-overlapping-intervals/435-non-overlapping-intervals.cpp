
 bool cmp(vector<int> &a, vector<int> &b)
    {
        return a[1]<b[1];
    }
class Solution {
public:
   
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int ans = -1;
        
        sort(intervals.begin(), intervals.end(), cmp);
        
        vector<int> temp = intervals[0];
        for(vector<int> x: intervals)
        {
            if(temp[1] > x[0])
                ans++;
            else
                temp = x;
        }
        return ans;
    }
};