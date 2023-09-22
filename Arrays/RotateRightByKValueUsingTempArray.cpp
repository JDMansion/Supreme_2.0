#include <iostream>
#include <vector>
using namespace std;

void rotateArrayByK(int arr[], int n, int k) {
  k = k%n;
  if(n == 0) 
    return;

  if(k>n)
    return; 
  
  int temp[k];

  for(int i = n-k, j = 0; i<n, j<k; i++, j++) {
    temp[j] = arr[i];
  }

  for(int i=n-k-1; i>=0; i--) {
    arr[i+k] = arr[i];
  }

  for(int i=0; i<k; i++) {
    arr[i] = temp[i];
  }

  for(int i=0; i<n; i++) {
    cout<<arr[i]<<endl;
  }
   
}

int main() {
  int arr[] = {2,4,6,8,10};
  int k = 2;

  rotateArrayByK(arr, 5, 2);
  
}
