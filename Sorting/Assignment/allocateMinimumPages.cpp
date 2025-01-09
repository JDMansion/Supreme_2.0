// GFG problem - (Allocate Minimum Pages)    (v.v. imp que)
//You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the ith book. 
//You also have an integer k representing the number of students. The task is to allocate books to each student such that:

//Each student receives atleast one book.
//Each student is assigned a contiguous sequence of books.
//No book is assigned to more than one student.

//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    bool isPossibleSolution(vector<int>& arr, int n, int k, int sol) {
        int pageSum = 0;
        int c = 1;
        
        for(int i=0; i<n; i++) {
            if(arr[i] > sol) {
                return false;
            }
            if(pageSum + arr[i] > sol) {
                c++;
                pageSum = arr[i];
                if(c > k) {
                    return false;
                }
            }
            else {
                pageSum += arr[i];
            }
        }
        return true;
    }
  
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        
        if(k > n) return -1;
        
        int start = 0;
        int end = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;
        
        while(start <= end) {
            int mid = (start + end) >> 1;
            if(isPossibleSolution(arr, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
