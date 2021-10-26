#include<stdio.h>
#include<iostream>
using namespace std;
int f[10];
// optimized program of fibonacci by recursion in time complexity O(n) using memoization
int fib(int n) 
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
            f[n-2]=fib(n-2);
        if(f[n-1]==-1)
            f[n-1]=fib(n-1);
        return f[n-2]+f[n-1];
    }
}
int main()
{
    for(int i=0;i<10;i++)       //initialization of 
    f[i]=-1;                    //global variable                
    cout<<fib(6);
    return 0;
}