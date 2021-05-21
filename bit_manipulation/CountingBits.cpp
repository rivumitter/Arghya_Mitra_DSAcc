/*
	Submission Link : https://leetcode.com/submissions/detail/496055626/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        result.push_back(0);
        
        for(int i=1;i<=num;i++)
        {
            if(i%2 == 0)
            result.push_back(result[i/2]);
            else
                result.push_back(result[i/2] + 1);
                
        }
        return result;
    }
};

int main() {
	// your code goes here
	return 0;
}


