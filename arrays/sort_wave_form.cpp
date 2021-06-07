#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void convertToWave(int *arr, int n){
        
        // Your code here
        for(int i=0;i<n;i+=2){
            if(i>0){
                if(arr[i]<arr[i-1])
                swap(arr[i],arr[i-1]);
            }
            if(i<n-1 && arr[i]<arr[i+1])
            swap(arr[i],arr[i+1]);
        }
        
    }
int main() {
	//code

	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	   convertToWave(arr,n);
	    
	    for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	}