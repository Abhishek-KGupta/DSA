#include<iostream>
#include<stdio.h>
#include<strings.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    for(int i=0;i<n;i++)
    cout<<s[i]<<" ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<s[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<s[2][3];
    
    
}