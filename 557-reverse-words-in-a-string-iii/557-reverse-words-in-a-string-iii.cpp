class Solution {
public:
    string reverseWords(string s) 
    {
        int n=s.size(), j=0;
        for(int i=0;i<n;i++)
        {
            // if(s[i]!=' ')
            //     continue;
            if(s[i]==' ' or i==n-1)
            {
                int x;
                if(i==n-1)
                    x=i;
                else 
                    x=i-1;
                while(x>j)
                    swap(s[x--],s[j++]);
                j=i+1;
            }
        }
        return s;
    }
};