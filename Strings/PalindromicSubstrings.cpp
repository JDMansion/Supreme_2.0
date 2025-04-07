// Palindromic Substrings    ( Leetcode : 647 )

class Solution {
public:

    int findPalindrome(string s, int i, int j) {
        int count = 0;

        while(i>=0 && j<s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {

        int totalCount = 0;
        
        for(int center = 0; center < s.length(); center++) {
            //Odd indexing
            int oddCase = findPalindrome(s, center, center);

            //Even indexing
            int evenCase = findPalindrome(s, center, center+1);

            totalCount += oddCase + evenCase;
        }
        return totalCount;
    }
};
