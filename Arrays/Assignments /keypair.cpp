//Given an array arr of positive integers and another number x. Determine whether two elements exist in arr whose sum is exactly x or not.

//2 approaches
// 1. nested loop 
// 2. first sort the array, and then 2-pointer approach 

#include <iostream>
#include<limits.h>
#include <vector>
#include <algorithm>
using namespace std;

//Key Pair

bool keyPair(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == x)
                return true;
        }
    }
    return false;
}

bool keyPairTwoPointerApproach(int arr[], int n, int x) {
    int l = 0;
    int h = n-1;

    while(l < h) {
        int pairSum = arr[l] + arr[h];
        if(pairSum == x) 
            return true;
        else if(pairSum > x)
            h--;
        else
            l++;
    }
    return false;
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = 6;
    int x = 10;

    // bool ans = keyPair(arr, n, x);

    sort(arr, arr + n);

    bool ans = keyPairTwoPointerApproach(arr, n, x);
    
    cout<<ans;
}
