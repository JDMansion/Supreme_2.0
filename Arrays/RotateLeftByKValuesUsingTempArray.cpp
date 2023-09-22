#include <iostream>
#include <vector>
using namespace std;

//Everything is similar to right shift, just simple logic change. 

void rotateArrayByK(int arr[], int n, int k) {
  k = k%n;
  if(n == 0) 
    return;

  if(k>n)
    return; 
  
  int temp[k];

  for(int j = 0; j<k; j++) {
    temp[j] = arr[j];
  }

  for(int i=k; i<n; i++) {
    arr[i-k] = arr[i];
  }

  for(int i=0, j=n-k; i<k, j<n; i++, j++) {
    arr[j] = temp[i];
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
