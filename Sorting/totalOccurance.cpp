#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(int arr[],int size, int target) {
  int s = 0;
  int e = size-1;
  int mid = s + (e-s)/2;

  int ans = -1;
  
  while(s<=e) {
    if(arr[mid] == target) {
      ans = mid;
      e = mid-1;
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

int totalOccurance(int arr[], int n, int target) {
  int firstOcc = firstOccurance(arr, n, target);
  int lastOcc = lastOccurance(arr, n, target);
  int total = (lastOcc - firstOcc)+1;
  return total;
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

  int ansIndex = totalOccurance(arr, n, target);

  cout<<"Total Occurance of "<<target<<" = "<<ansIndex<<endl;
  
  // if(ansIndex == -1) {
  //   cout<<"Element not found "<<endl;
  // }
  // else {
  //   cout<<"Element found at Index "<<ansIndex<<endl;
  // }
  
}
