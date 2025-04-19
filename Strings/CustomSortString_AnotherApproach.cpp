// Custom Sort String (Another Approach)   ( Leetocode: 791 )

// Solution as per Ayushi Sharma Youtube 
class Solution {
public:
    string customSortString(string order, string s) {
        string s1, s2;
        int arr[26] = {0};

        for(char ch : order) arr[ch - 'a']++;

        for(char ch : s) {
            if(arr[ch - 'a'] == 0) s2 += ch;
            else arr[ch - 'a']++;
        }

        for(char ch : order) {
            while(arr[ch - 'a'] > 1) {
                s1 += ch;
                arr[ch - 'a']--;
            }
        }
        return s1+s2;
    }
};
