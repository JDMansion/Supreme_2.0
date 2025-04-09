// Minimum time Difference   ( Leetcode : 539 )
// T.C = O(nlogn)
// S.C = O(n)

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int result = INT_MAX, n = timePoints.size();
        vector<int> minutes(n);

        for(int i=0; i<n; i++) {
            string hh = timePoints[i].substr(0,2);
            string mm = timePoints[i].substr(3);
            int min = 60 * stoi(hh) + stoi(mm);
            minutes[i] = min;
        }

        sort(minutes.begin(), minutes.end());
        for(int i=0; i<n-1; i++) {
            result = min(result, minutes[i+1] - minutes[i]);
        }

        result = min(result, 1440 - minutes[n-1] + minutes[0]);
        return result;
    }
};
