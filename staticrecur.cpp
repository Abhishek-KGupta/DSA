#include<stdio.h>
#include<iostream>
using namespace std;
int recur(int a)
{
    static int x=0;
    if(a>0)
    {
        x++;
       return x+recur(a-1);
    }
    return 0;
}
int main()
{
    cout<<recur(5);
    return 0;
}