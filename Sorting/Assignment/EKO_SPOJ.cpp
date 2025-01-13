// Problem : EKO;   Platform: SPOJ

#include <iostream>
#include<limits.h>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;

//Eko Spoj
//Binary Search 
bool isPossibleSolution(vector<long long int> trees, long long int m, long long int mid) {
  long long int woodCollected = 0;

  for(long long int i = 0; i < trees.size(); i++) {
    if(trees[i] > mid) {
      woodCollected += trees[i] - mid;
    }
  }
  return woodCollected >= m;
}

long long int maxSawBladeHeight(vector<long long int> trees, long long int m) {
  long long int start = 0, end;
  end = *max_element(trees.begin(), trees.end());
  long long int ans = -1;

  while(start <= end) {
    long long int mid = start + (end - start)/2;

    if(isPossibleSolution(trees, m, mid)) {
      ans = mid;
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }
  return ans;
}

int main() {
  long long int n, m;
  cin >> n >> m;
  vector<long long int> trees;

  while(n--) {
    long long int treeHeight;
    cin >> treeHeight;
    trees.push_back(treeHeight);
  }

  cout << maxSawBladeHeight(trees, m) << endl;
}


//Brute Force
// int main() {
//   int arr[] = {20, 15, 10, 17};
//   int m = 7;
//   int n = sizeof(arr)/sizeof(int);

//   int max = *max_element(arr, arr+n);
//   int ans = -1;

//   for(int i = 1; i <= max; i++) {
//     int cutterLength = i;

//     int sum = 0;
//     int j = 0;
//     while(j < n) {
//       if(arr[j] > cutterLength) {
//         sum = sum + (arr[j] - cutterLength);
//       }
//       j++;
//     }
//     if(sum == m) {
//       ans = cutterLength;
//       break;
//     }
//   }
//   cout<<ans;
// }
