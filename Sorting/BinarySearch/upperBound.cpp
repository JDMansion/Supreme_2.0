//Upper Bound
//You are given a sorted array ‘arr’ containing ‘n’ integers and an integer ‘x’.
//Implement the ‘upper bound’ function to find the index of the upper bound of 'x' in the array.

int upperBound(vector<int> &arr, int x, int n){
	int start = 0;
	int end = n - 1;
	int ans = n;

	while(start <= end) {
		int mid = start + (end - start)/2;

		if(arr[mid] > x) {
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}
