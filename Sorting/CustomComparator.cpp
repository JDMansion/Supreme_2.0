#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void print(vector<int> &v) {
//   for(int i=0; i<v.size(); i++) {
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }

// bool mycomp(int &a, int &b) {
//   return a>b;
// }

bool mycompfor1stIndex(vector<int> &a, vector<int> &b) {
  return a[1] < b[1];
}

void printvv(vector<vector<int>> &v) {
  for(int i=0; i<v.size(); i++) {
    vector<int> temp = v[i];
    int a = temp[0];
    int b = temp[1];
    cout<<a<<" "<<b<<endl;
  }
  cout<<endl;
}

int main() {
  // vector<int> v = {55, 44, 33, 22, 11};
  // sort(v.begin(), v.end(), mycomp);

  vector<vector<int>> v;
  int n; 
  cout<<"Enter size: \n";
  cin>>n;

  for(int i=0; i<n; i++) {
    int a, b;
    cout<<"Enter value of a & b: \n";
    cin>>a>>b;
    vector<int> temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
  }

  cout<<"Here are the values:"<<endl;
  sort(v.begin(), v.end(), mycompfor1stIndex);
  printvv(v);
  
  // print(v);
  return 0;
}
