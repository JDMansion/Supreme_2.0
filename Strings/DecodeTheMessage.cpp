// Decode the Message   ( Leetcode : 2325 )
// T.C = O(K + M)    K = size of string key, M = size of string message
// S.C = O(M)    M = size of string message

class Solution {
public:
    string decodeMessage(string key, string message) {
        //create mapping
        char start = 'a';
        char mapping[280] = {0};

        for(auto ch : key) {
            if(ch != ' ' && mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }
        //use mapping
        string ans;

        for(auto ch : message) {
            if(ch == ' ') {
                ans.push_back(' ');
            }
            else {
                char decodeChar = mapping[ch];
                ans.push_back(decodeChar);
            }
        }
        return ans;
    }
};
