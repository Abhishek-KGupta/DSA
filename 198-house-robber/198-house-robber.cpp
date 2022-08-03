class Solution {
public:
    int rob(vector<int>& nums) {
        
        int prev = 0;
        int prev_prev = 0;
        
        for( int i = 0; i < nums.size(); i++)
        {
            int curr = prev;
            prev = max(prev_prev + nums[i], prev);
            prev_prev = curr;
        }
        
        return prev;
        
    }
};