class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int index = 0;
        int evenIndex = 0;
        int oddIndex = 1;

        while(index < n && evenIndex < n) {
            if(nums[index] > 0) {
                ans[evenIndex] = nums[index];
                evenIndex += 2;
            }
            index++;
        }

        index = 0;
        while(index < n && oddIndex < n) {
            if(nums[index] < 0) {
                ans[oddIndex] = nums[index];
                oddIndex += 2;
            }
            index++;
        }
        return ans;
    }
};
