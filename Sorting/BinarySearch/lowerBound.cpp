//Lower Bound
//You are given an array 'arr' sorted in non-decreasing order and a number 'x'. You must return the index of the lower bound of 'x'.


int lowerBound(vector<int> arr, int n, int x) {
	int start = 0;
	int end = n-1;
	int ans = n;

	while(start <= end) {
		int mid = start + (end - start)/2;

		if(arr[mid] >= x) {
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}
