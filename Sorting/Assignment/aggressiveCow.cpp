// Aggressive Cow   ( GFG )
//You are given an array with unique elements of stalls[], which denote the position of a stall. 
//You are also given an integer k which denotes the number of aggressive cows. 
//Your task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

class Solution {
  public:

    bool isPossibleSolution(vector<int>& stalls, int k, int mid) {
        //can we place k cows, with at least mid distance between cows
        
        int c = 1;
        int pos = stalls[0];
        
        for(int i = 1; i<stalls.size(); i++) {
            if(stalls[i] - pos >= mid) {
                c++;
                pos = stalls[i];   //one more cow has been placed
            }
            if(c == k) return true;
        }
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {

        sort(stalls.begin(), stalls.end());
        
        int start = 0;
        int end = stalls[stalls.size() - 1] - stalls[0];
        
        int ans = -1;
        
        while(start <= end) {
            int mid = (start + end) >> 1;
            
            if(isPossibleSolution(stalls, k, mid)) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
};