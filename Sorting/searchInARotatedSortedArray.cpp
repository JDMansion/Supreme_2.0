class Solution {
public:
    
    int findPivotIndex(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e - s)/2;

        while(s <= e) {
            //corner case
            if(s == e) 
                return s;
            
            else if(mid+1 < n && nums[mid] > nums[mid + 1])
                return mid;
            else if(mid-1 >= 0 && nums[mid] < nums[mid - 1]) 
                return mid - 1;
            else if(nums[mid] < nums[s])
                e = mid - 1;
            else 
                s = mid + 1;
            
            mid = s + (e - s)/2;
        }
        return -1;
    }

    int binarySearch(vector<int>& nums, int start, int end, int target) {
        int mid = start + (end - start)/2;

        while(start <= end) {
            if(nums[mid] == target) {
                return mid;
            }
            if(target > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivotIndex(nums);
        int n = nums.size();
        int ans = -1;

        //target is on left of pivot
        if(target >= nums[0] && target <= nums[pivotIndex]) {
            ans = binarySearch(nums, 0, pivotIndex, target);
        }

        else {
            ans = binarySearch(nums, pivotIndex + 1, n-1, target);
        }
        return ans;
    }
};
