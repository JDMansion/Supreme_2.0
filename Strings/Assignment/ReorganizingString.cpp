// Reorganizing String    ( Leetcode : 767 )

class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};    // because in the constraints it says, input string s only have lowercase english letter. So, the range is now between 97 - 122. (26 letters)

        for(int i=0; i<s.length(); i++) {
            hash[s[i] - 'a']++;
        } // O(n)

        int max_freq = INT_MIN;
        char max_freq_char;

        for(int i=0; i<26; i++) {
            if(hash[i] > max_freq) {
                max_freq_char = i + 'a';
                max_freq = hash[i];
            }
        } //O(26)

        int index = 0;
        while(max_freq > 0 && index < s.length()) {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        } // O(n)

        if(max_freq != 0) return "";

        hash[max_freq_char - 'a'] = 0;

        for(int i=0; i<26; i++) {
            while(hash[i] > 0) {
                index = index >= s.length() ? 1 : index;
                s[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        } // O(26 * n)
        return s;
    }
};
