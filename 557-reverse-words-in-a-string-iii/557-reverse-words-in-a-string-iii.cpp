class Solution {
public:
    string reverseWords(string s) 
    {
        int n=s.size(), j=0, i=0;
        for(i;i<n-1;i++)
        {
            if(s[i]==' ')
            {
                int x;
                x=i-1;
                while(x>j)
                    swap(s[x--],s[j++]);
                j=i+1;
            }
        }
        int x=i;
            while(x>j)
                swap(s[x--], s[j++]);
        return s;
    }
};