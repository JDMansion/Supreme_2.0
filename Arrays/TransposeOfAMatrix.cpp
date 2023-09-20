#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>> &arr) {
  for(int r=0; r<arr.size(); r++) {
    for(int c=r; c<arr[0].size(); c++) {
      swap(arr[r][c], arr[c][r]);
    }
  }
}

int main() {

  vector<vector<int>> arr = { {2,4,6}, {8,10,12}, {14,16,18}};
  transpose(arr);

  for(int r=0; r<arr.size(); r++) {
    for(int c=0; c<arr[0].size(); c++) {
      cout<<arr[r][c]<<" ";
    }
    cout<<endl;
   }
}
