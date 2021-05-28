#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	unordered_map<int, int> m;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    m[arr[i]]++;
	}
	
	int k;
	cin>>k;
	
	int count = 0;
    for(auto i : m){
         if(i.second>(n/k))
         cout<<i.first<<" ";
    }	
	
	
	return 0;
}
