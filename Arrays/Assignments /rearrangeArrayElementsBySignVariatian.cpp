//There’s an array ‘A’ of size ‘N’ with positive and negative elements (not necessarily equal). 
//Without altering the relative order of positive and negative elements, you must return an array of alternately positive and 
//negative values. The leftover elements should be placed at the very end in the same order as in array A.

//Note: Start the array with positive elements.      (TUF)

#include <iostream>
#include<limits.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rearrangeBySign(vector<int>& nums) {                //T.C. = O(2*n)
    vector<int> pos;                                            //S.C = O(n)
    vector<int> neg;

    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > 0) pos.push_back(nums[i]);
        else neg.push_back(nums[i]);
    }

    vector<int> ans(nums.size());

    //when the number of pos. elements are less
    if(pos.size() < neg.size()) {
        for(int i=0; i<pos.size(); i++) {
            ans[2*i] = pos[i];
            ans[2*i + 1] = neg[i];
        }
        
        int index = pos.size() * 2;
        for(int i=pos.size(); i<neg.size(); i++) {
            ans[index] = neg[i];
            index++;
        }
    }

    //when the number of neg. elements are less
    else {
        for(int i=0; i<neg.size(); i++) {
            ans[2*i] = pos[i];
            ans[2*i + 1] = neg[i];
        }

        int index = neg.size() * 2;
        for(int i=neg.size(); i<pos.size(); i++) {
            ans[index] = pos[i];
            index++;
        }
    }
    return ans;
    
}


int main() {
    vector<int> v {1,2,-4,-5,3,4, 100, -25, -30, -99, 22, -70, -80};

    vector<int> ans = rearrangeBySign(v);

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
}
