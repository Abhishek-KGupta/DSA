class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int max = 0, flag = 0;
        for(auto x: nums)
        {
            if(flag == 0)
            {
                flag++;
                max = x;
            }
            else if(x == max)
                flag++;
            else 
                flag--;
        }
        return max;
    }
};