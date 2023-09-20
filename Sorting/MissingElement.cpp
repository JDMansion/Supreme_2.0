#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(int arr[], int n) {
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s <= e) {
    int diff = arr[mid] - mid;

    if(diff == 1) {
      s = mid+1;
    }
    else {
      ans = mid;
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  
  // if(ans +1 == 0)
  //   return n+1;
  
  return mid+1;
}

int main() {

  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int ans = findMissingElement(arr,n);

  cout<<"Missing element is "<<ans<<endl;
}
