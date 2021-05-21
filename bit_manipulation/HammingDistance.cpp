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
    int hammingDistance(int x, int y) {
        int temp = x ^ y;
        return nosOne(temp);
    }
};

int main() {
	// your code goes here
	return 0;
}


