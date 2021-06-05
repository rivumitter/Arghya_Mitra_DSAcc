/*
    submission link : https://leetcode.com/submissions/detail/503395481/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        
        priority_queue <int> pq;
        for(int i=0;i<n;i++)
            pq.push(nums[i]);
        
        int count = 1,ans = -1;
        while(!pq.empty()){
            if(count==k)
            {
                ans = pq.top();
                break;
            }
            count++;
            pq.pop();
        }
        return ans;
    }
int main() {
	// your code goes here
	return 0;
}
