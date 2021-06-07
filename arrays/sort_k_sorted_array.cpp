#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> kSort(int *arr,int n,int k){
    vector<int> ans;
    priority_queue<int,vector<int>,greater<int> > pq;
    
    int i=0,index = 0;
    for(;i<=k && i<n;i++)
    pq.push(arr[i]);
    //cout<<"i="<<i<<endl;
    index = 0;
    for(;i<n;i++){
        ans.push_back(pq.top());
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()){
       ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
    
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> ans = kSort(arr,n,k);
	    
	    for(int i=0;i<ans.size();i++)
	    cout<<ans[i]<<" ";
	    cout<<endl;
	}
	
	
	return 0;
}