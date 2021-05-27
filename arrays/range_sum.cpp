#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n],pre[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++){
	    if(i==0)
	    pre[i] = arr[i];
	    else
	    pre[i] = pre[i-1]+arr[i];
	}
	for(int i=0;i<n;i++){
	    cout<<pre[i]<<" ";
	}
	cout<<endl;
	int t;
	cin>>t;
	while(t--){
	 int i,j;
	 cin >> i >> j;
	 cout<<pre[j] - pre[i==0?0:i-1]<<endl;
	}
	
	
	
	return 0;
}
