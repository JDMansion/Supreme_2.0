#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(int arr[],int size, int f) {
  int s = 0;
  int e = size-1;
  int mid = s + (e-s)/2;

  while(s<=e) {
    if(arr[mid] == f) {
      return true;
    }
    else if(f > arr[mid]) {
      s = mid+1;
    }
    else {
      e = mid-1;
    }
    mid = s + (e-s)/2;   //yaha per galti hoti ha, bhool jate ha
  }
  return false;
}

int main() {

  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int find;
  cin>>find;

  bool ans = binarySearch(arr, n, find);

  if(ans) {
    cout<<"true"<<endl;
  }
  else {
    cout<<"false"<<endl;
  }
}
