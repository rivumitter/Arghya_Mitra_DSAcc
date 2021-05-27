/*
    submission link : https://leetcode.com/submissions/detail/499138746/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
          
        stack<pair<int,int>> bucket;
        
        sort(intervals.begin(),intervals.end());
        
        bucket.push({intervals[0][0],intervals[0][1]});
        
        for(int i=1;i<n;i++){
            int s1 = bucket.top().first;
            int e1 = bucket.top().second;
            int s2 = intervals[i][0];
            int e2 = intervals[i][1];
            
            if(s2>e1){
                bucket.push({s2,e2});
            }
            else{
                bucket.pop();
                e1 = max(e1,e2);
            //    cout<<"=="<<s1<<" "<<e1<<endl;
                bucket.push({s1,e1});
            }
        }
        int k = 0;
        vector<vector<int>> ans(bucket.size(),vector<int>(2));
        while(!bucket.empty()){
          
            
            ans[k][0] = bucket.top().first;
            ans[k][1] = bucket.top().second;
            k++;
            bucket.pop();
            
        }
        return ans;
    }
int main() {
	// your code goes here
	return 0;
}
