//Missing elements from an array with duplicates
//N = size of array
//a[i] = [1,N]

#include <iostream>
#include<limits.h>
#include <vector>
#include <algorithm>
using namespace std;

//visited method

void findMissing(int *arr, int size) {         T.C. = O(n)
    for(int i=0; i<size; i++) {
        int index = abs(arr[i]);

        if(arr[index - 1] > 0) {
            arr[index - 1] *= -1;
        }
    }

    for(int i=0; i<size; i++) {
        if(arr[i] > 0) {
            cout<<i+1<<" ";
        }
    }
}

//sorting and swapping
void sortingAndSwapping(int arr[], int size) {     T.C. = O(n)
    int i = 0;
    while(i<size) {
        int index = arr[i] - 1;
        if(arr[i] != arr[index]) {
            swap(arr[i], arr[index]);
        }
        else {
            i++;
        }
    }

    for(int i=0; i<size; i++) {
        if(arr[i] != i+1) {
            cout<<i+1<<" ";
        }
    }
}

int main() {
    int arr[] = {1,3,5,3,4};
    int size = sizeof(arr)/sizeof(int);
    // findMissing(arr, size);
    sortingAndSwapping(arr, size);
}
