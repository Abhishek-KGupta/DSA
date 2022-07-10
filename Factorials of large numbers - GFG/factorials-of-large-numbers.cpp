// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
    vector<int> res;
    int carry=0;
    res.push_back(1);
    for(int num=2;num<=N;num++)
    {
        for(int i=0;i<res.size();i++)
        {
            int x=res[i]*num+carry;
            res[i]=x%10;
            carry=x/10;
        }
        
        while(carry!=0)
        {
            res.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(begin(res),end(res));
    return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends