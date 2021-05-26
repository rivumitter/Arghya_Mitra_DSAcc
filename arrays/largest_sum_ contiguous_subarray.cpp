/*
	submission link : https://leetcode.com/submissions/detail/498473022/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxSum = max(maxSum,sum);
            sum = max(0,sum);
        }
        return maxSum;
    }
int main() {
	// your code goes here
	return 0;
}
