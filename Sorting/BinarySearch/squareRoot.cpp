//Find the square root of a number, with precision upto 3 digit numbers using Binary Search.

#include <iostream>
using namespace std;

float squareRoot(int x, int precision) {
    int s = 0;
    int e = x;
    float ans = -1.0;

    while(s <= e) {
        int mid = s + (e - s)/2;
        int mul = mid * mid;

        if(mul == x) {
            ans = mid;
            break;
        }
        else if(mul > x) {
            e = mid - 1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
    }

    float increment = 0.1;
    for(int i = 0; i < precision; i++) {
        while(ans * ans <= x) {
            ans += increment;
        }

        ans = ans - increment;
        increment = increment/10;
    }
    return ans;
}

int main() {
    int x = 111;
    int precision = 3;

    cout<<squareRoot(x, precision)<<endl;    
    return 0;
}
