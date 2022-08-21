class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) 
    {
        int slen = stamp.size();
        int tlen = target.size();
        vector<int> ans;
        
        bool has_match, substring;
        
        do{
            has_match = false;
            
            for(int i = 0; i <= tlen - slen; i++)
            {
                substring = true;
                int ques = 0;
                
                for(int j = 0; j < slen; j++)
                {
                    if(target[i + j] == '?')
                        ques++;
                    
                    else if(target[i + j] != stamp[j])
                    {
                        substring = false;
                        break;
                    }
                }
                
                if(substring and ques < slen)
                {
                    has_match = true;
                    ans.push_back(i);
                    for(int j = 0; j < slen; j++)
                        target[i + j] = '?';
                }
            }
            }while(has_match);
            
        for(auto x: target)
                if(x != '?')
                    return{};
            
        reverse(ans.begin(), ans.end());
        return ans;
        }
};