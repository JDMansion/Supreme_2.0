//Given an array arr[], find the first repeating element. 
//The element should occur more than once and the index of its first occurrence should be the smallest.
//Note:- The position you return should be according to 1-based indexing. 

class Solution {
  public:
    int firstRepeated(vector<int> &arr) {      //T.C. O(n) , S.C. O(n) 
        
        unordered_map<int, int> hash;
        
        for(int i=0; i<arr.size(); i++) {
            hash[arr[i]]++;
        }
        
        for(int i=0; i<arr.size(); i++) {
            if(hash[arr[i]] > 1) return i+1;
        }
        return -1;
    }
};
