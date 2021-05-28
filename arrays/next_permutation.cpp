/*
    submission link : https://leetcode.com/submissions/detail/499496752/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
        
        int idx = -1;
        int n = nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1])
            {
                idx = i;
                break;
            }
        }
        //desc sorted as no idx changed 
        if(idx == -1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        int prev = idx;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx-1] && nums[i]<=nums[prev]){
                prev = i;
            }
        }
        swap(nums[idx-1],nums[prev]);
        reverse(nums.begin()+idx,nums.end());
        
    }
int main() {
	// your code goes here
	return 0;
}
