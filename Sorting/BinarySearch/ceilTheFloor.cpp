//Ceil the Floor (Coding Ninjas)

//You're given a sorted array 'a' of 'n' integers and an integer 'x'.
//Find the floor and ceiling of 'x' in 'a[0..n-1]'.

//Note:
//Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
//Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.


int ceiling(vector<int>& a, int n, int x) {
	int start = 0;
	int end = n - 1;
	int ans = -1;

	while(start <= end) {
		int mid = start + (end - start)/2;

		if(a[mid] >= x) {
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	if(ans != -1) {
		return a[ans];
	}
	else {
		return ans;
	}
}

int floor(vector<int>& a, int n, int x) {
	int start = 0;
	int end = n - 1;
	int ans = -1;

	while(start <= end) {
		int mid = start + (end - start)/2;

		if(a[mid] <= x) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	if(ans != -1) {
		return a[ans];
	}
	else {
		return ans;
	}
}



pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	return make_pair(floor(a, n, x), ceiling(a, n, x));
}
