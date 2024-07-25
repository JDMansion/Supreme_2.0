//Given an array where all elements occur even number of time excep one element. 
//All repeating numbers are in pairs and no pair is adjacent
//Ek bar me koi bhi number 2 se zada bar nhi aa sakta.
//Find element that occurs odd time.

//ex. arr[] = {1, 1, 5, 5, 2, 2, 3, 3, 2, 4, 4,}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Find Odd occuring element
int findOddOccuringElement(int arr[], int n) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s)/2;

  while(s <= e) {
    //single element case
    if(s == e) {
      return s;
    }

    //mid check -> even or odd
    if(mid & 1) { //mid&1 = true -> odd number
      if(arr[mid - 1] == arr[mid]) {
        //right me jao
        s = mid + 1;
      }
      else {
        //left me jao
        e = mid - 1;
      }
    }
    else {
      //even
      if(arr[mid + 1] == arr[mid]) {
        //right me jao
        s = mid + 2;
      }
      else {
        //ya toh ma right per khara hu
        //ya toh ma answer per khara hu
        //that's why e = mid ker rha hu
        //kyon ki e = mid - 1 se ans lost ho sakta ha
        e = mid;
      }
    }
    mid = s + (e - s)/2;
  }
  return -1;
}


int main() {
  int arr[] = {10, 10, 2, 2, 3, 3, 2, 5, 5, 6, 6, 7, 7};
  int n = sizeof(arr)/sizeof(int);

  int ansIndex = findOddOccuringElement(arr, n);

  cout<<arr[ansIndex]<<endl;
}
