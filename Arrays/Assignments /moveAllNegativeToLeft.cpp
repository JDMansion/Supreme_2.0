//Move all negative numbers to the left side of an array.
//Assumption = order maintenance not required.

//2 methods to solve:
// 1. sort() method    -> T.O(nlogn)
// 2. Dutch National Flag Algo. (2-pointer)    -> T.O(n)


#include <iostream>
#include<limits.h>
#include <vector>
#include <algorithm>
using namespace std;

void sortNegativeToLeft(int *arr, int size) {
    //Dutch National Flag Algorithm

    int l = 0;
    int r = size-1;

    while(l<r) {
        if(arr[l] < 0) {
            l++;
        }
        else if(arr[r] > 0) {
            r--;
        }
        else {
            swap(arr[l], arr[r]);
        }
    }
}

int main() {
    int arr[] = {1, 2, -3, 4, -5, 6, 10, -20, 0, -88};
    int size = sizeof(arr)/sizeof(int);
    sortNegativeToLeft(arr, size);

    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
