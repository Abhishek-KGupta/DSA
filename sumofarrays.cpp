#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int amin()
{
    int a,b;
    cin>>a>>b;
    int arr1[a],arr2[b];
    for(int i=0;i<a;i++)
    cin>>arr1[i];
    for(int i=0;i<b;i++)
    cin>>arr2[i];
    int m=max(a,b);
    int res[m];
    for(int i=0;i<m;i++)
    {
        res[i]=arr1[i]+arr2[i];
    }

}