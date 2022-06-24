class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int tot=1;
        int z=0;
        vector<long long int> pre(nums.size(),1);
        vector<long long int> post(nums.size(),1);
        
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                pre[i]=nums[i];
                post[nums.size()-1]=nums[nums.size()-1];
            }
            else if(i==nums.size()-1)
            {
                pre[i]=pre[i-1]*nums[i];
                post[0]=post[1]*nums[0];
            }
            else 
            {
                pre[i]=pre[i-1]*nums[i];
                post[nums.size()-1-i]=post[nums.size()-i]*nums[nums.size()-1-i ];
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
                nums[0]=post[1];
            else if(i==nums.size()-1)
                nums[i]=pre[i-1];
            else
                nums[i]=pre[i-1]*post[i+1];
        }
            
        return nums;

    }
};