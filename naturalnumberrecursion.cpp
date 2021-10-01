#include<iostream>
#include<stdio.h>
using namespace std;
int nat(int n)
{
    if(n>0)
    {
        return n+nat(n-1);
    }
    return n;
}
int nat1(int n)
{
    return n*(n+1)/2;
}
int main()
{
    cout<<nat1(5);
}