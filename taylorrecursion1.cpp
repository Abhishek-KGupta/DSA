#include<iostream>
#include<stdio.h>
using namespace std;
double taylor1(int x,int p)//p=no. of terms
{
    static double n=1,d=1;
    double r;
    if(p>0)
    {
        r=taylor1(x,p-1);
        n=n*x;
        d=d*p;
        return r+n/d; 
    }
    return 1;
}
double taylor2(int x,int p)
{
    static double s=1;
    if(p>0)
    {
        s=1+x*s/p;
        return taylor2(x,p-1);
    }
    return s;
}
int main()
{
    cout<<taylor2(4,10);
    return 0;
}