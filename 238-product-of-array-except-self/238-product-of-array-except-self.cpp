class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> arr(n, 1);
        int right = 1, left = 1;
        
        for(int i = 0; i < n; i++)
        {
            arr[i] = left; 
            left = left * nums[i];
        }
        
        for(int i = n - 1; i >= 0; i--)
        {
            arr[i] = arr[i] * right;
            right = right * nums[i];
        }
        
        return arr;
    }
};