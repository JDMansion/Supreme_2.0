// 532. K-diff Pairs in an Array
// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.
//A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

class Solution {
public:

    int bs(vector<int>& nums, int start, int x) {
        int end = nums.size()-1;

        while(start <= end) {
            int mid = start + (end - start)/2;

            if(nums[mid] == x) {
                return mid;
            }
            else if(x > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
    }
    
    int findPairs(vector<int>& nums, int k) {
        //Using Binary Search
        sort(nums.begin(), nums.end());
        set<pair<int,int>> ans;

        for(int i=0; i<nums.size(); i++) {
            if(bs(nums, i+1, nums[i] + k) != -1) {
                ans.insert({nums[i], nums[i] + k});
            }
        }

        return ans.size();
        
        
        //2-pointor approach:

        // sort(nums.begin(), nums.end());

        // int n = nums.size();
        // int i = 0;
        // int j = 1;
        // set<pair<int, int>> ans;

        // while(i < j && j < n) {
        //     int diff = nums[j] - nums[i];

        //     if(diff == k) {
        //         ans.insert({nums[i], nums[j]});
        //         i++, j++;
        //     }
        //     else if(diff > k) {
        //         i++;
        //     }
        //     else {
        //         j++;
        //     }
        //     if(i == j) j++;
        // }
        // return ans.size();
    }
};
