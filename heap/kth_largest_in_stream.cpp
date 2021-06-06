/*
    submission link : https://leetcode.com/submissions/detail/503898274/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class KthLargest {
public:
    int x;
priority_queue<int, vector<int>, greater<int>> pq;
KthLargest(int k, vector<int>& nums) {
    int i=0;
    x=k;
    while(i<nums.size()) pq.push(nums[i++]);
    }

int add(int val) {
    pq.push(val);
    while(pq.size()>x) pq.pop();        
    return pq.top();
}
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
int main() {
	// your code goes here
	return 0;
}
