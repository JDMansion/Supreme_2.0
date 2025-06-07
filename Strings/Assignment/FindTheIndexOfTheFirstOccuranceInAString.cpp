// Find the Index of the First Occurance in a String  ( Leetcode : 28 )


class Solution {
public:

    int bruteForce(string haystack, string needle) {
        int ans = -1;
        bool flag = 0;
        for(int i=0; i<haystack.length(); i++) {
            string s = "";
            for(int j=i; j<haystack.length(); j++) {
                s.push_back(haystack[j]);
                if(s == needle) {
                    ans = i;
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        return ans;
    }

    int strStr(string haystack, string needle) {
        //return bruteForce(haystack, needle);
        // O(n^2) , n = length of haystack

        // Sliding Window
        // O(n * m) , n = length of haystack, m = length of needle

        int n = haystack.length();
        int m = needle.length();

        for(int i = 0; i <= n-m; i++) {
            for(int j = 0; j < m; j++) {
                if(needle[j] != haystack[i + j]) {
                    break;
                }
                if(j == m-1) {
                    return i;
                }
            }
        }
        return -1;
    }
};
