// Find the Prime Numbers from 1 to n.
// N is the input given by user.

#include <iostream>
#include <vector>
using namespace std;

bool checkPrime(int n) {

  if(n <= 1) 
      return false;
  
  for(int i=2; i<=(n/2); i++) {
    if(n%i == 0)
      return false;
  }
  return true;
}

int main() {
  int n;
  cin>>n;
  int count = 0;

  for(int i=1; i<=n; i++) {
    bool ans = checkPrime(i);
    if(ans == true) {
      count++;
    }
  }

  cout<<"Total Prime Number till "<<n<<": "<<count<<endl;

}


