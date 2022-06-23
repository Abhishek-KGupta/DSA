class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<size(nums);i++)
        {
            if(s.count(nums[i]))
                return true;
            else
                s.insert(nums[i]);
        }
        return false;
    }
};