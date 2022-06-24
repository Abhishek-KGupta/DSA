class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int tot=1;
        int z=0;
        for(auto x:nums)
        {
            if(x!=0)
                tot*=x;
            if(x==0)
                z++;
        }
        
        vector<int> m(nums.size(),0);
        if(z>1)
            return m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(z==0)
                nums[i]=tot/nums[i];
            
            else if(z==1)
            {
                if(nums[i]==0)
                    nums[i]=tot;
                else
                    nums[i]=0;
            }
        }
        return nums;

        return nums;
    }
};