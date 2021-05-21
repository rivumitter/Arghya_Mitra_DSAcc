/*
	Submission Link : https://leetcode.com/submissions/detail/496019290/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     int nosOne(int n){
        int count = 0;
        while(n){
            n = n & (n-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int num) {
        vector<int> result;
        
        for(int i=0;i<=num;i++)
        {
            result.push_back(nosOne(i));
        }
        return result;
    }
};

int main() {
	// your code goes here
	return 0;
}


