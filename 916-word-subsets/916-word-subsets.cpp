class Solution {
public:
    
    vector<int> Freq(string s)
    {
        vector<int> ans(26, 0);
        for(int i = 0; i < s.size(); i++)
            ans[s[i]-'a']++;
        
        return ans;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
    {
        vector<int> final_freq(26, 0);
        vector<string> res;
        
        for(int i = 0; i < words2.size(); i++)
        {
            vector<int> freq= Freq(words2[i]);
            for(int i = 0; i < 26; i++)
                final_freq[i] = max(final_freq[i], freq[i]);
        }
        
        for(int i = 0; i < words1.size(); i++)
        {
            vector<int> freq = Freq(words1[i]);
            bool flag = true;
            
            for(int i = 0; i < 26; i++)
            {
                if(final_freq[i] > freq[i])
                {
                    flag=false;
                    break;
                }
            }
            
            if(flag)
            res.push_back(words1[i]);
        }
        
        return res;
    }
};