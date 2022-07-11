class Solution {
public:
    int firstUniqChar(string s) {
        int a[26];
        fill(a,a+26,-1);
        int res=INT_MAX;
        
        for(int i=0;i<s.size();i++)
        {
            int x=a[s[i]-'a'];
            if(x==-1)
                a[s[i]-'a']=i;
            else
                a[s[i]-'a']=-2;
        }
        
        for(int i=0;i<26;i++)
            if(a[i]>-1)
                res=min(res,a[i]);
        
        return res==INT_MAX?-1:res;
                
    }
};