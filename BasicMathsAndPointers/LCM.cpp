#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    
    while(a > 0 && b > 0) {
        if(a > b)
            a = a - b;
        else 
            b = b - a;
    }
    return a == 0 ? b : a;
}

int main() {
	//find LCM

    int a = 12, b = 25;
    
    int h = hcf(a,b);
    
    int LCM = (a * b)/ h;
    
    cout<<LCM<<endl;
}
