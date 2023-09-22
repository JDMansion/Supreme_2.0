#include <iostream>
#include <vector>
using namespace std;

//Using reversal Algorithm (ref. Strivers website)

void reverse(int arr[], int s, int e) {
  while(s<=e) {
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    s++;
    e--;
  }
}

void rotateArrayByK(int arr[], int n, int k) {

  reverse(arr, n-k, n);

  reverse(arr, 0, n-k);

  reverse(arr, 0, n);

  for(int i=0; i<n; i++) {
    cout<<arr[i]<<endl;
  }
   
}

int main() {
  int arr[] = {2,4,6,8,10};
  int k = 2;

  rotateArrayByK(arr, 5, 2);
  
}
