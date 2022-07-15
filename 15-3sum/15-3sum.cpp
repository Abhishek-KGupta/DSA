class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<3)
            return {};
        
        sort(nums.begin(), nums.end());
        if(nums[0]>0)
            return {};
        
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                break;
            
            if(i>0 and nums[i]==nums[i-1])
                continue;
            
            int low=i+1, high=n-1, sum=0;
            while(low<high)
            {
                sum=nums[low]+nums[high]+nums[i];
                if(sum>0)
                    high--;
                
                else if(sum<0)
                    low++;
                
                else
                {
                    ans.push_back({nums[i], nums[high], nums[low]});
                    
                    int last_high=nums[high];
                    while(last_high==nums[high] and low<high)
                        high--;
                    
                    int last_low=nums[low];
                    while(last_low==nums[low] and low<high)
                        low++;
                }
            }
        }
        return ans;
    }
};