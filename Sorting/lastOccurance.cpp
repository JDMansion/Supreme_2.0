#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(int arr[],int size, int target) {
  int s = 0;
  int e = size-1;
  int mid = s + (e-s)/2;

  int ans = -1;
  
  while(s<=e) {
    if(arr[mid] == target) {
      ans = mid;
      s = mid+1;
    }
    else if(target > arr[mid]) {
      s = mid+1;
    }
    else {
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int main() {

  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int target;
  cin>>target;

  int ansIndex = lastOccurance(arr, n, target);

  if(ansIndex == -1) {
    cout<<"Element not found "<<endl;
  }
  else {
    cout<<"Element found at Index "<<ansIndex<<endl;
  }
  
}
