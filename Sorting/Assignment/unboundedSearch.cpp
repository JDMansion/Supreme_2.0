//Unbounded Search
//Find the element in an infinite sorted array.

int bruteForce(int arr[], int x) {
  int i  = 0;

  while(1) {
    if(arr[i] > x) {
      break;
    }
    else if(arr[i] == x) {
      return i;
    }
    i++;
  }
  return -1;
}

int binarySearch(int arr[], int start, int end, int x) {
  while(start <= end) {
    int mid = start + (end - start)/2;

    if(arr[mid] == x) {
      return mid;
    }
    else if(x > arr[mid]) {
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }
  return -1;
}

int exponentialSearch(int arr[], int n, int x) {
  if(arr[0] == x) return 0;
  
  int i = 0;
  int j = 1;

  while(arr[j] < x) {
    i = j;
    j = j * 2;
  }

  return binarySearch(arr, i, min(j, n), x);
}


int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 23, 25, 26, 28, 30, 32, 34};
  int n = sizeof(arr) / sizeof(int);   
  //Here, I am sending the size because it's not possible to make an infinite array manually. And to find the high bound which is j, I need to find the minimum between j and the last element of the array here in this example. 
  
  int x = 32;
  // cout<<bruteForce(arr, x);

  cout<<exponentialSearch(arr, n,  x);
}

