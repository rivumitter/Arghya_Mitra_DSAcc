/*
    Submission Link : https://leetcode.com/submissions/detail/496028144/
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
    unsigned int x =1, ans = 0;
    unsigned int m = (x << 31);
    while(m){
        if((m & left) == ( m & right)){
            if((m & left)){
                ans += m;   
            }
        }else{
            break;
        }
        m >>= 1;
    }
    return ans;
}
};

int main() {
	// your code goes here
	return 0;
}


