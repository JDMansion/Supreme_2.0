#include <iostream>
#include<limits.h>
#include <vector>
#include <algorithm>
using namespace std;

//Wave print of a matrix
void wavePrintMatrix(vector<vector<int>> v) {
    int row = v.size();
    int col = v[0].size();

    for(int j=0; j<col; j++) {
        if((j & 1) == 0) {
            for(int i=0; i<row; i++) {
                cout<<v[i][j]<<" ";
            }
        }
        else {
            for(int i=row-1; i>=0; i--) {
                cout<<v[i][j]<<" ";
            }
        }
    }
}

int main() {
    vector<vector<int>> v= {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
    };

    wavePrintMatrix(v);
}
