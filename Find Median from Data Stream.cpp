class MedianFinder {
public:
    
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        int minsize=minheap.size();
        int maxsize=maxheap.size();
        
        if(minsize==maxsize)
        {
            maxheap.push(num);
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        else
        {
            minheap.push(num);
            maxheap.push(minheap.top());
            minheap.pop();
            
        }
        
    }
    
    double findMedian() {
        
        if(minheap.size()==maxheap.size())
        {
            return (double) (minheap.top()+maxheap.top())/2;

        }
        else
        {
            return (double) minheap.top();
        }
        
    }
};