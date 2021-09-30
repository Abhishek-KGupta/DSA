#include<cmath>
#include<cstdio>
#include<vector>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int minLen(string a[],int n)
{
    int len=a[0].length();
    for(int i=1;i<n;i++)
    {
        if(a[i].length()<len)
        {
            len=a[i].length();
        }
    }
    return len;
}
string prefix(string s[], int n, int l)
{
    char wrd;
    string ans="";
    for(int j=0;j<l;j++)
    {
        wrd=s[0][j];
        for(int i=0;i<n;i++)
        {
        if(s[i][j]!=wrd)
            return ans;
        }
        ans=ans+wrd;
        
    }
    return ans;
}
int main() {
    
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int l=minLen(s,n);
    string ans=prefix(s,n,l);
    cout<<ans;
    return 0;
}
