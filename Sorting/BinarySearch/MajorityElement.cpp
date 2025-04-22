// Majority Element   ( Leetocde : 169 )
//this is solved using a different approach other than Moore's Voting Algo

//Intuition : every test-case will have a element which will be occuring greater than n/2 times
// So, to fulfill this, if we sort it in increasing order, then we can clearly see that the middle element will be more than n/2 times

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int start = 0;
        int end = nums.size()-1;

        int mid = end - (start+end)/2;

        return nums[mid];
    }
};


// T.C = O(nlogn)   {because of sorting}
