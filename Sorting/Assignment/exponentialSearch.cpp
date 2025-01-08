//Given a sorted array which is of very large size. 
//Search an element x and return it's index as answer. 
//Use exponential search technique, to descrease the time complexitiy, better than Binary Search.

//Other common names of Exponential Search are:
// 1. Doubling search
// 2. Galloping search
// 3. Struzik search

int binarySearch(int arr[], int start, int end, int x) {
  while(start <= end) {
    int mid = start + (end - start)/2;

    if(arr[mid] == x) {
      return mid;
    }
    else if(x > arr[mid]) {
      start = start + 1;
    }
    else {
      end = end - 1;
    }
  }
  return -1;
}

int exponentialSearch(int arr[], int n, int x) {
  if(arr[0] == x) return 0;

  int i = 1;

  while(i < n && arr[i] <= x) {
    i = i * 2;    // i *= i , i = i << 1 
  }
  return binarySearch(arr, i/2, min(i, n-1), x);
}

int main() {
  int arr[] = {2, 3, 4, 6, 8, 10, 13, 16, 17, 22, 24, 25, 26};
  int n = sizeof(arr) / sizeof(int);
  int x = 25;

  cout<<exponentialSearch(arr, n, x);
}
