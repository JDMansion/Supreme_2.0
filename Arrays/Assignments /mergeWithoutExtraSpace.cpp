//Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. 
//Merge them in sorted order without using any extra space. 
//Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

//GFG

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    private:
        void swapIfGreater(long long arr1[], long long arr2[], int ind1, int ind2) {
            if(arr1[ind1] > arr2[ind2]) {
                swap(arr1[ind1], arr2[ind2]);
            }
        }
        
    public:
        //Function to merge the arrays.
        //Optimal Sol 1.
        // T.C.= O(min(n,m)) + O(nlogn) + O(mlogm)
        // S.C = O(1)
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int left = n-1;
            int right = 0;
            
            while(left >=0 && right < m) {
                if(arr1[left] > arr2[right]) {
                    swap(arr1[left], arr2[right]);
                    left--, right++;
                }
                else{
                    break;
                }
            }
            
            sort(arr1, arr1+n);
            sort(arr2, arr2+m);
        } 
        
        //Optimal Sol. 2
        //Shell sorting -> Gap method
        //T.C = O(log(n+m)) * O(n+m)
        //S.C = O(1)
        // void merge(long long arr1[], long long arr2[], int n, int m) {
        //     int len = (m + n);
        //     int gap = (len / 2) + (len % 2);
            
        //     while(gap > 0) {
        //         int left = 0;
        //         int right = left + gap;
        //         while(right < len) {
        //             //when pointers are in arr1 and arr2
        //             if(left < n && right >=n) {
        //                 swapIfGreater(arr1, arr2, left, right - n);
        //             }
        //             //when pointers are in arr2 and arr2
        //             else if(left >= n) {
        //                 swapIfGreater(arr1, arr2, left - n, right - n);
        //             }
                    
        //             //when pointers are in arr1 and arr1
        //             else {
        //                 swapIfGreater(arr1, arr2, left, right);
        //             }
        //         }
        //         if(gap == 1) break;
        //         gap = (gap / 2) + (gap % 2);
        //     }
        // }
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
