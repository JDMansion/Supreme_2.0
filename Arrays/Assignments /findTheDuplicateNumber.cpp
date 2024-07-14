//Find the Duplicate Number
//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number.
//You must solve the problem without modifying the array nums and uses only constant extra space.

//3 methods

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        //first method to sort and then check if nums[i] == nums[i+1], T.C. O(nlogn)

        //visited Solution

        // for(int i=0; i<nums.size(); i++) {          //T.C. O(n)
        //     int index = abs(nums[i]);

        //     if(nums[index] < 0) return index;

        //     nums[index] *= -1;
        // }
        // return -1;

        //positioning method

        while(nums[0] != nums[nums[0]]) {             //T.C. O(n)
            swap(nums[0], nums[nums[0]]);
        }

        return nums[0];


        //without modifying array sol uses Binary Search
    }
};
