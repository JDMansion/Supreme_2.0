// Longest Palindromic Substring   ( Leetcode : 5 )

class Solution {
public:

    bool isPalindrome(string s, int start, int end) {
        while(start < end) {
            if(s[start] != s[end]) return false;
            start++, end--;
        }
        return true;
    }

    string bruteForce(string s) {
        string ans = "";

        for(int i=0; i<s.length(); i++) {
            for(int j=i; j<s.length(); j++) {
                if(isPalindrome(s, i, j)) {
                    string t = s.substr(i, j-i+1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        } // O(n^3)  
        return ans;
    }

    string longestPalindrome(string s) {
        // return bruteForce(s);  // O(n^3)

        // One other solution can be using DP. There we can solve this in O(n^2)
        if(s.empty()) {
            return "";
        }

        int start = 0;
        int end = 0;

        for(int i=0; i<s.length(); i++) {
            int odd = expandAroundCenter(s, i, i);
            int even = expandAroundCenter(s, i, i+1);
            int max_len = max(odd, even);

            if(max_len > end - start) {
                start = i - (max_len - 1)/2;
                end = i + max_len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }

    int expandAroundCenter(string s, int left, int right) {
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
    
};
