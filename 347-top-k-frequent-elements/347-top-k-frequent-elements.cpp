class Solution {
public:
    
    static bool cmp(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second>b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> res;
        vector<pair<int,int>>temp;
        
        for(auto x:nums)
            mp[x]++;
        
        for(auto i:mp)
            temp.push_back(i);
        
        sort(temp.begin(),temp.end(),cmp);
        
        int a=0;
        for(auto x:temp)
        {
            if(a<k)
            {
                res.push_back(x.first);
                a++;
            }
            if(a>=k)
                break;
        }
        return res;
    }
};