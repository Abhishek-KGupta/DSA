class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        int first=0, last=n-1;
        
        while(first<=last)
        {
            if(abs(nums[first])>abs(nums[last]))
            {
                res[--n]=nums[first]*nums[first];
                first++;
            }    
            else
            {
                res[--n]=nums[last]*nums[last];
                last--;
            }
        }
        return res;
    }
};