#include<iostream>
#include<array>
using namespace std;
int main()
{
   int arr[]={6,8,9,11,12,13,16,20,25};
   int diff=arr[0]-0;
   for(int i=0;i<9;i++)
   {
        if(arr[i]-i!=diff)
       {
           while(diff<(arr[i]-i))
           {
           cout<<i+diff<<",";
           diff++;
       }}
   }
    return 0;
}
