class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> v;
        
        for(auto i:strs)
        {
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        
        for(auto x:mp)
        {
            vector<string> t;
            for(auto j:x.second)
                t.push_back(j);
            v.push_back(t);    
        }
        
        return v;
    }
};