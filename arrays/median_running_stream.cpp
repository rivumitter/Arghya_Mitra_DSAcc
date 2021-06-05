#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int> > minHeap; 
    double med;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxHeap.empty() && minHeap.empty())
        {
            med = num;
            maxHeap.push(num);
        }
        else if(maxHeap.size() > minHeap.size()){
            if(med>num){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(num);
            }
            else
                minHeap.push(num);
            med = (maxHeap.top() + minHeap.top())/2.0;
        }
        else if(maxHeap.size() < minHeap.size()){
            if(med<=num){
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(num);
            }
            else
                maxHeap.push(num);
            med = (maxHeap.top() + minHeap.top())/2.0;
        }
        else{
            if(med>num)
            {
                maxHeap.push(num);
                med = maxHeap.top();
            }
            else{
                minHeap.push(num);
                med = minHeap.top();
            }
        }
        
    }
    
    double findMedian() {
        return med;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
int main() {
	// your code goes here
	return 0;
}
