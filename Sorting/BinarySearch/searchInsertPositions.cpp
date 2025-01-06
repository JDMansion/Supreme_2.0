//You are given a sorted array 'arr' of distinct values and a target value 'm'. 
//You need to search for the index of the target value in the array.

//Coding Ninjas

int searchInsert(vector<int>& arr, int m)
{
	int n = arr.size();
	int start = 0;
	int end = n - 1;
	int ans = n;

	while(start <= end) {
		int mid = start + (end - start)/2;

		if(arr[mid] >= m) {
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}
