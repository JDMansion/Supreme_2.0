// Find and replace Pattern    ( Leetcode : 890 )

class Solution {
public:
    //normalising the string
    void createMapping(string& s) {
        //create mapping
        char arr[300] = {0};
        char start = 'a';

        for(auto ch : s) {
            if(arr[ch] == 0) {
                arr[ch] = start;
                start++;
            }
        }

        //use mapping
        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            s[i] = arr[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        createMapping(pattern);

        for(string s : words) {
            string temp = s;

            createMapping(temp);

            if(temp == pattern) {
                ans.push_back(s);
            }
        }
        return ans;
    }
};
