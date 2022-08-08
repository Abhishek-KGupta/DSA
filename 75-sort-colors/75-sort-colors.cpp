class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int start = 0, mid = 0, end = nums.size() - 1;
        
        while(mid <= end)
        {
            if(nums[mid] == 0)
                swap(nums[mid++], nums[start++]);
                
            else if(nums[mid] == 2)
                swap(nums[mid], nums[end--]);
            
            else
                mid++;
        }
    }
};