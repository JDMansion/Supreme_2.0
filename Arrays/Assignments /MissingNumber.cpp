//Given an array nums containing n distinct numbers in the range [0, n], 
//return the only number in the range that is missing from the array.


class Solution {
public:

    int sortingMethod(vector<int>&nums) {.     //T.C = O(nlogn) + O(n) = O(nlogn)
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++) {
            if(nums[i] != i) return i;
        }

        return n;
    }


    int xorr(vector<int>&nums) {          //T.C = O(n)
        int ans = 0;

        //1. XOR all elements in array
        for(int i=0; i<nums.size(); i++) {
            ans ^= nums[i];
        }

        //2. XOR all elements in rang [0,N] 
        for(int i=0; i<=nums.size(); i++) {
            ans ^= i;
        }
        return ans;
    }

    int missingNumber(vector<int>& nums) {
        // return sortingMethod(nums);
        return xorr(nums);
    }
};
