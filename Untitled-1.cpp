#include <stdio.h>
#include <iostream>
using namespace std;
int linearsearch(int arr[],int k, int n)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==k)
        return i;
    }
    return -1;
}
int binarysearch(int arr[],int k, int n)
{
    int start=0;
    int end=n;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if (k>arr[mid])
        {
            start=mid+1;
        }
        else if(k<arr[mid])
        {
            end=mid-1;
        }
        else
            return mid;

    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    cout<<binarysearch(a,k,n);
}

