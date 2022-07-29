class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<int> res;
        priority_queue<pi, vector<pi>> pq;
        
        for(int i = 0; i < k; i++)
                pq.push({abs (arr[i] - x), arr[i]});
        
        for(int i = k; i < arr.size(); i++)
        {
            int diff = abs(arr[i] - x);
            auto [f,s] = pq.top();
    
            if(diff<f)
            {
                pq.pop();
                pq.push({diff, arr[i]});
            }
        }
        
        while(!pq.empty())
        {
            auto [f, s] = pq.top();
            pq.pop();
            res.push_back(s);
        }
        
        sort(res.begin(), res.end());
        return res;
    } 
};

// [1,2,3,4,5]
// 4
// 3