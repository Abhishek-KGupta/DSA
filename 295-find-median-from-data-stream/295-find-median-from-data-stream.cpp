class MedianFinder {
public:
    
    priority_queue <int> maxheap;
    priority_queue <int, vector<int>, greater<int>> minheap;
    
    MedianFinder() 
    {
        
    }
    
    void addNum(int num) 
    {
        if(maxheap.size()>minheap.size())
        {
            if(maxheap.top()>num)
            {
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(num);
            }
            else
                minheap.push(num);
        }
        
        
        else
        {
            if(maxheap.size()==0)
                maxheap.push(num);
            else if(maxheap.top()>=num)
                maxheap.push(num);
            else
            {
                minheap.push(num);
                maxheap.push(minheap.top());
                minheap.pop();
            }
        }
        
    }
    
    double findMedian() 
    {
        if(maxheap.size()==minheap.size())
            return (maxheap.top()+minheap.top())/2.0;
        return maxheap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */