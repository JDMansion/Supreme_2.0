class Solution {
public:
    int mySqrt(int x) {
        //search space
        int s = 0;
        int e = x;
        int ans = -1;
        long long int mid = s + (e - s)/2;


        while(s <= e) {
            //predicate function
            if(mid * mid == x) {
                return mid;
            }
            //less wale case me ans ko store kra lenge
            else if(mid * mid < x) {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};
