#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Binary Search in a nearly Sorted Array
int searchNearlySorted(int arr[], int n, int target) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s)/2;

  while(s <= e) {
    if(mid-1 >=0 && arr[mid - 1] == target) {
      return mid - 1;
    }
    if(arr[mid] == target) {
      return mid;
    }
    if(mid+1 < n && arr[mid + 1] == target) {
      return mid + 1;
    }

    else if(target > arr[mid]) {
      //right me jayege
      s = mid + 2;
    }
    else {
      //left me jayege
      e = mid - 2;
    }
    mid = s + (e - s)/2;
  }
  return -1;
  
}


int main() {
  int arr[] = {20, 10, 30, 50, 40, 70, 60};
  int n = sizeof(arr)/sizeof(int);
  int target = 20;

  int targetIndex = searchNearlySorted(arr, n, target);

  cout<<targetIndex<<endl;
}
