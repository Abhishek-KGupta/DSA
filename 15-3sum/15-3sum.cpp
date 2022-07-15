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
        
        unordered_map<int, int> mp;
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
            mp[nums[i]]=i;
        
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]>0)
                break;
            
            if(i>0 and nums[i]==nums[i-1])
                continue;
            
            for(int j=i+1;j<n-1;j++)
            {
                if(j>i+1 and nums[j]==nums[j-1])
                    continue;
                
                int sum=-(nums[i]+nums[j]);
                if(mp.find(sum)!=mp.end() and mp[sum]>j)
                    ans.push_back({nums[i], nums[j], sum});
            }
        }
        return ans;
    }
};