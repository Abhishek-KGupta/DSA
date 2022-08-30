class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pre(nums.size(), 0);
        vector<int> post(nums.size(), 0);
        int prev = 0, next = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            post[i] = prev;
            prev += nums[i];
            pre[nums.size() - i - 1] = next;
            next += nums[nums.size() - i - 1];
        }
        
        for(int i = 0; i < nums.size(); i++)
            if(pre[i] == post[i])
                return i;
        
        return -1;
    }
};