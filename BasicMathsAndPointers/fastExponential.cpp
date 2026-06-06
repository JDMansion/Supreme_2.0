#include <bits/stdc++.h>
using namespace std;

int fastExponential(int a, int b) {
    int ans = 1;
    
    while(b > 0) {
        if(b & 1) {
            //odd
            ans *= a;
        }
        a *= a;
        b >>= 1; // b = b/2
    }
    return ans;
}


int main() {
	// your code goes here

    int a = 2;
    int b = 5;
    
    cout<<fastExponential(a,b);
}
