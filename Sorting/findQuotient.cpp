#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Dividend is divided by Divisor, find the Quotient using Binary Search
int getQuotient(int dividend, int divisor) {
  int s = 0;
  int e = dividend; 
  int mid = s + (e - s)/2;
  int ans = -1;
  
  while(s <= e) {
    if(mid * divisor == dividend) {
      return mid;
    }
    else if(mid * divisor < dividend) {
      //ans store
      ans = mid;
      //right me jao
      s = mid + 1;
    }
    else {
      //left me jao
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}

int main() {
  int dividend = -10;
  int divisor = 3;

  int ans = getQuotient(abs(dividend), abs(divisor));

  if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
    ans = 0 - ans;
  } 

  cout<<ans<<endl;
  
}
