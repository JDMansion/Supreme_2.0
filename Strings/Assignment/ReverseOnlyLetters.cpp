// Reverse Only Letters    ( Leetcode : 917 )

class Solution {
public:

    bool isAlphabet(char ch) {
        if((ch >= 65 && ch <= 90) || (ch >=97 && ch<=122)) {
            return true;
        } 
        return false;
    }

    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length()-1;

        for(int i=0, j=s.length()-1; i<j;) {
            if(isAlphabet(s[i]) && isAlphabet(s[j])) {
                swap(s[i], s[j]);
                i++, j--;
            }
            else if(!isAlphabet(s[i])){
                i++;
            }
            else {
                j--;
            }
        }
        return s;
    }

    // we can also use in-build stl funciton : isalpha() to check if the character
    // is alphabet or not
};
