#include <iostream>
#include <vector>
using namespace std;

//Using Modulous 

void rotateRightByK(int arr[], int n, int k) {
  k = k%n;

  for(int i=0; i<n; i++) {
    if(i<k) {
      cout<<arr[n+i-k]<<" ";
    }
    else {
      cout<<arr[i-k]<<" ";
    }
  }
  
}

int main() {
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int k;
  cin>>k;

  rotateRightByK(arr, n, k);
}
