//Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that 
//each unique element appears only once. The relative order of the elements should be kept the same. 
//Then return the number of unique elements in nums.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1, j = 0;

        //Two-pointer approach
        while(i < nums.size()) {
            if(nums[i] == nums[j]) i++;

            else {
                nums[++j] = nums[i++];
                // j++;
                // nums[j] = nums[i];
                // i++l
            }
        }
        return j+1;
    }
};
