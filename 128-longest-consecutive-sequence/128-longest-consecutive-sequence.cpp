class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int curr=0,longest=0;
        for(auto x:nums)
            s.insert(x);
        
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                curr=0;
                while(s.find(nums[i]+curr)!=s.end())
                    curr++;
            }
            longest=max(longest,curr);
        }
        return longest;
    }
};