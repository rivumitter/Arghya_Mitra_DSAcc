/*
    Submission link : https://leetcode.com/submissions/detail/498145194/
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 int findMin(vector<int>& nums) {
        if(nums.size()==0) return -1;
        if(nums.size()==1) return nums[0];
        
        int left = 0;
        int right = nums.size() - 1;
        while(left<right){
            int mid = left + (right - left)/2;
            if(mid>0 && nums[mid]<nums[mid-1])
                return nums[mid];
            else if(nums[mid]>=nums[left] && nums[mid]>nums[right])
                left = mid + 1;
            else
                right = mid - 1;
            
        }
        
        
        return nums[left];
    }
int main() {
	// your code goes here
	return 0;
}
