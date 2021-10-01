#include<iostream>
#include<stdio.h>
using namespace std;
int power(int n,int m)
{
    if(m>0)
    {
        return n*power(n,m-1);
    }
    return 1;
}
int power1(int n,int m)
{
    if(m>0)
    {
        if(m%2==0)
            return power1(n*n,m/2);
        else
            return n*power1(n*n,(m-1)/2);
    }
    return 1;
}
int main()
{
    cout<<power1(3,3);
}