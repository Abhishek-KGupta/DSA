class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int n = nums.size(), max = 1;
        vector<int> dp(n, 1);
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < i; j++)
            {
                if(nums[j] < nums[i] and dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    if(max < dp[i])
                        max = dp[i];
                }
            }
        
        return max;
    }
};