class Solution {
public:
    bool anagram(vector<int>& arr1, vector<int>& arr2)
    {
        for(int i = 0; i < 26; i++)
            if(arr1[i] != arr2[i])
                return false;
        
        return true;
    }
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> res;
        if(p.size() > s.size())
            return res;
        
        vector<int> arr1(26, 0);
        vector<int> arr2(26, 0);
        
        for(int i = 0; i < p.size(); i++)
        {
            arr1[s[i] - 'a']++;
            arr2[p[i] - 'a']++;
        }
        
        if(anagram(arr1, arr2))
            res.push_back(0);
        
        for(int i = p.size(); i < s.size(); i++)
        {
            arr1[s[i - p.size()] - 'a']--; 
            arr1[s[i] - 'a']++;
            if(anagram(arr1, arr2))
                res.push_back(i - p.size() + 1);
        }
        return res;
    }
};