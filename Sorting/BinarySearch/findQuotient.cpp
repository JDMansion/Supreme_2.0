//Given Dividend and Divisor, find the Quotient upto 3 decimal places.

#include <iostream>
using namespace std;

float findQuotient(int dividend, int divisor, int precision) {
    int s = 0;
    int e = dividend;
    float ans;

    while(s <= e) {
        int mid = s + (e - s)/2;

        if(divisor * mid == dividend) {
            ans = mid;
            break;
        }
        else if(divisor * mid > dividend) {
            e = mid - 1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
    }

    float increment = 0.1;

    for(int i=0; i < precision; i++) {
        while(ans * divisor <= dividend) {
            ans += increment;
        }

        ans = ans - increment;
        increment = increment/10;
    }

    return ans;
}

int main() {
    int dividend = 10;
    int divisor = 3;
    int precision = 3;

    float ans = findQuotient(abs(dividend), abs(divisor), precision);

    if(dividend > 0 && divisor < 0 || dividend < 0 && divisor > 0) {
        ans = 0 - ans;
    }
    cout<<ans;
}



