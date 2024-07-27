#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void selectionSort(vector<int>& v) {
  int n = v.size();
  for(int i = 0; i < n-1; i++) {
    //assuming ith hi smallest element hai
    int minIndex = i;
    for(int j = i+1; j < n; j++) {
      if(v[j] < v[minIndex]) {
        minIndex = j;
      }
    }
    //swap ith and minIndex elements
    swap(v[i], v[minIndex]);
  }
}

int main() {
  vector<int> v = {50, 40, 30, 20, 10};
  selectionSort(v);

  for(int i=0; i<v.size(); i++) {
    cout<<v[i]<<" ";
  }
}
