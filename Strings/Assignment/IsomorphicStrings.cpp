// Isomorphic Strings   ( Leetcode : 205 )

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char mapping[256] = {0};
        char istMapped[256] = {0};

        for(int i=0; i<s.length(); i++) {
            if(mapping[s[i]] == 0 && istMapped[t[i]] == 0) {
                mapping[s[i]] = t[i];
                istMapped[t[i]] = true;
            }
        }

        for(int i=0; i<s.length(); i++) {
            if(mapping[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};
