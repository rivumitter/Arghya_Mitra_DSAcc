//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> ans;
        int len = 0;
        for(int i=1;i<n;i++)
        {
            if(i<n && A[i-1]<A[i]){
                vector<int> vec;
                vec.push_back(i-1);
                
            while(i<n && A[i-1]<=A[i]){
                i++;
            }
            vec.push_back(i-1);
            ans.push_back(vec);
        }
        
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends