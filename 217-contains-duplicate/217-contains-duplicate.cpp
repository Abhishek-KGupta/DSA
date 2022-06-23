class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> s;
        for(int i=0;i<size(nums);i++)
        {
            s[nums[i]]++;
            if(s[nums[i]]>1)
                return true;
        }
        return false;
    }
};