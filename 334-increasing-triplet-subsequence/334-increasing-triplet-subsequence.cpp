class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        if(nums.size() < 3)
            return false;
        
        int prev = INT_MAX;
        int prev_prev = INT_MAX;
        
        for(auto x: nums)
        {
            if(x <= prev)
                prev = x;
            else if( x <= prev_prev)
                prev_prev = x;
            else
                return true;
        }
        return false;
    }
};