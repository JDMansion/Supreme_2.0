//You are given an integer array nums consisting of n elements, and an integer k.

//Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. 
//Any answer with a calculation error less than 10-5 will be accepted.


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //sliding window

        int i = 0;
        int j = k-1;
        int sum = 0;

        for(int y=i; y<=j; y++) {
            sum += nums[y];
        } 
        int maxSum = sum;

        j++;
        while(j < nums.size()) {
            sum -= nums[i++];
            sum += nums[j++];
            maxSum = max(sum, maxSum);
        }

        double avg = maxSum / (double)k;
        return avg;
    }
};
