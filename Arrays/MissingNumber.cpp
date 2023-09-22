class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int nSum = (n*(n+1))/2;

        int sum=0;

        for(int i=0; i<n; i++) {
            sum += nums[i];
        }
        return nSum - sum;

        // int n = nums.size();
        // int sum = 0;
        // int nSum = 0;

        // for(int i=0; i<n; i++) {
        //     sum += nums[i];
        // }

        // for(int i=0; i<=n; i++) {
        //     nSum += i;
        // }
        // return nSum-sum;
    }
};
