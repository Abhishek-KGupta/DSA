class Solution {
public:
    
    void permute(vector<string>& res, string comb, string& s, int i)
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
            // string x=comb;
            comb+=tolower(c);
            permute(res, comb, s, i+1);
            comb.pop_back();
                
            // string y=comb;
            comb+=toupper(c);
            permute(res, comb, s, i+1);
            comb.pop_back();
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        permute(res, "", s, 0);
        return res;
    }
};