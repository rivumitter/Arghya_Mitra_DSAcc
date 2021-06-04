/*
    submission link : https://leetcode.com/submissions/detail/503095886/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            
            if(i==0 || i>0 && nums[i]!=nums[i-1])
            {
                int sum = 0 - nums[i];
                int low = i+1;
                int high = n-1;
                while(low<high){
                    if(nums[low]+nums[high] == sum)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        while(low<n-1 && nums[low]==nums[low+1]) low++;
                        while(high>0 && nums[high]==nums[high-1]) high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high] > sum)
                            high--;
                    else
                        low++;
                }
            }
            
        }
      return ans;   
    }
int main() {
	// your code goes here
	return 0;
}
