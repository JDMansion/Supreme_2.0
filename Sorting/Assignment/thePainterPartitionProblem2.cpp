// The painter Partition Problem II   ( GFG ) 

//Dilpreet wants to paint his dog's home that has n boards with different lengths. 
//The length of ith board is given by arr[i] where arr[] is an array of n integers. 
//He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board.

//Return the minimum time to get this job done if all painters start together with the constraint that any painter will 
//only paint continuous boards, say boards numbered [2,3,4] or only board [1] or nothing but not boards [2,4,5].


class Solution {
  public:
  
    bool isPossibleSolution(vector<int>& arr, int k, int mid) {
        
        int timeSum = 0;
        int painters = 1;
        
        for(int i = 0; i<arr.size(); i++) {
            if(arr[i] > mid) return false;
            
            else if(arr[i] + timeSum > mid) {
                painters++;
                timeSum = arr[i];
                if(painters > k) return false;
            }
            else {
                timeSum += arr[i];
            }
        }
        return true;
    }
  
    int minTime(vector<int>& arr, int k) {
        int start = 0;
        int end = accumulate(arr.begin(), arr.end(), 0);
        
        int ans = -1;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(isPossibleSolution(arr, k, mid)) {
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
