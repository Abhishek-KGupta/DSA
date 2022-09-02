class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> sMap (256, 0);
        vector<char> tMap (256, 0);
        
        for(int i = 0; i < s.size(); i++)
        {
            if(sMap[s[i]] == 0 and tMap[t[i]] == 0)
            {
                sMap[s[i]] = t[i];
                tMap[t[i]] = s[i];
            }
            else if(sMap[s[i]] != t[i] or tMap[t[i]] != s[i])
                return false;
        }
        return true;
    }
};