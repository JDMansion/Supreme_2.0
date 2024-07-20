//LeetCode

class Solution {
public:

    vector<int> bruteForce(vector<int> &nums) {        //T.C = O(n)
        vector<int> pos;                               //S.C = O(n)
        vector<int> neg;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        for(int i=0; i<nums.size()/2; i++) {
            nums[i*2] = pos[i];
            nums[i*2 +1] = neg[i];
        }
        return nums;
    }

    vector<int> optimalSolution(vector<int>& nums) {    //T.C = O(n)
        vector<int> ans(nums.size(), 0);                //S.C = O(n)

        int posIndex = 0;
        int negIndex = 1;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] < 0) {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }

        return ans;
    }

    vector<int> rearrangeArray(vector<int>& nums) {
        // return bruteForce(nums);
        return optimalSolution(nums);
    }
};
