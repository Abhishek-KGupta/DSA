class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<int> res;
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        
        for(int i = 0; i < arr.size(); i++)
                pq.push({abs(arr[i]-x), arr[i]});
        

        while(k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(res.begin(), res.end());
        return res;
    } 
};

// [1,2,3,4,5]
// 4
// 3