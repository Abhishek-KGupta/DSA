class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax=0, maxSum=nums[0];
        for(auto x:nums)
        {
            curMax=max(curMax+x,x);
            maxSum=max(maxSum, curMax);
        }
        return maxSum;
    }
};