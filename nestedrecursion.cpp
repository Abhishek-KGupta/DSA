#include<iostream>
#include<stdio.h>
using namespace std;
int nest(int n)
{
    if(n>100)
        return n-10;
    else    
        return nest(nest(n+11));
}
int main()
{
cout<<nest(95)<<endl;
}
