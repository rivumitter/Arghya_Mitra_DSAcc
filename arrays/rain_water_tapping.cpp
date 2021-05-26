#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        //left->right
        int left[n];
        int right[n];
        int leftMax = arr[0];
        int rightMax = arr[n-1];
        left[0] = leftMax;
        right[n-1] = rightMax;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>leftMax)
            {
                leftMax = arr[i];
            }
            left[i] = leftMax;
        }
        //right to left
        for(int i=n-2;i>=0;i--){
           if(arr[i]>rightMax)
            {
                rightMax = arr[i];
            }
            right[i] = rightMax;
     
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=min(left[i],right[i]) - arr[i];
        }
        
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends