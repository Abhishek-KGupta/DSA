class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> temp;
        
        for(auto x: nums)
        {
            if(temp.empty() or temp[temp.size() - 1] < x)
                temp.push_back(x);
            else
            {
                auto a = lower_bound(temp.begin(), temp.end(), x);
                *a = x;
            }
        }
        
        return temp.size();
    }
};