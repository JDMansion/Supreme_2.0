// Valid Palindrome II   ( Leetcode : 680 )
// T.C = O(N)    N = length of the string
// S.C = O(1)

class Solution {
public:

    bool checkPalindrome(string s, int i, int j) {
        while(i < j) {
            if(s[i] == s[j]) {
                i++, j--;
            }
            else {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;

        while(i < j) {
            if(s[i] == s[j]) {
                i++, j--;
            }
            else {
                //remove ith element
                bool ans1 = checkPalindrome(s, i+1, j);

                //remove jth element
                bool ans2 = checkPalindrome(s, i, j-1);

                return ans1 || ans2;
            }
        }
        return true;
    }
};
