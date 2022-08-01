class Solution {
public:
    
    void permute(vector<string>& res, string comb, string s, int i)
    {
        if(i==s.size())
        {
            res.push_back(comb);
            return;
        }
        
        char c=s[i];
        if(isdigit(c))
        {
            comb+=c;
            permute(res, comb, s, i+1);
        }
        else
        {
            string x=comb;
            x+=tolower(c);
            permute(res, x, s, i+1);
            
            string y=comb;
            y+=toupper(c);
            permute(res, y, s, i+1);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        permute(res, "", s, 0);
        return res;
    }
};