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
int main()
{
    cout<<taylor1(1,10);
    return 0;
}