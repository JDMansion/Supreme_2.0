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
