#include<iostream>
using namespace std;
int TOH(int n,int A,int B,int C)
{
    int c=0;
    if(n>0)
    {
        TOH(n-1,A,C,B);
        c++;
        cout<<"from "<<A<<" to "<<B<<endl;
        TOH(n-1,B,A,C);
        
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    int t=TOH(n,1,2,3);
    cout<<"Total No. of moves "<<t;
    return 0;
}
