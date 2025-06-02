// Valid Anagram   ( Leetcode : 242 )

class Solution {
public:

    bool usingSortingMethod(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return (s == t) ? true : false;
    } // O(nlogn)

    bool usingFrequencyTable(string s, string t) {
        int arr[256] = {0};

        for(int i=0; i<s.length(); i++) {
            arr[s[i]]++;
        } // O(n)

        for(int i=0; i<t.length(); i++) {
            arr[t[i]]--;
        } // O(n)

        for(int i=0; i<256; i++) {
            if(arr[i] != 0) return false;
        } // O(256)

        return true;
    }

    bool isAnagram(string s, string t) {
        // return usingSortingMethod(s, t);   // O(nlogn)

        return usingFrequencyTable(s, t);    // O(n) + O(n) + O(256) = O(n)
    }
};
