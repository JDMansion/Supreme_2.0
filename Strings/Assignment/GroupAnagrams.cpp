// Group Anagrams   ( Leetcode : 49 )

class Solution {
public:

    vector<vector<string>> usingSortingMethod(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(auto str : strs) {
            string s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }

        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it -> second);
        }
        return ans;
    }

    std::array<int, 256> hash(string s) {
        std::array<int, 256> hash = {0};

        for(int i=0; i<s.size(); i++) {
            hash[s[i]]++;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Method 1: Using Sorting Method
        // T.C = O(n*mlogm). n = length of strs, m = max length of a string
        // T.C = O(n * m)
        // return usingSortingMethod(strs);

        //Method 2: Without Sorting 
        // T.C = O(n*m)
        // S.C = O(n*m)

        map<std::array<int, 256>, vector<string>> mp;

        for(auto str : strs) {
            mp[hash(str)].push_back(str);
        }

        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it -> second);
        }
        return ans;
    }
};
