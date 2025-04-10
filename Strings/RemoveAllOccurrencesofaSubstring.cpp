// Remove All Occurrences of a Substring    ( Leetcode : 1910 )

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

// 2nd Method : 
// Here, we are using string as a stack to insert each character from a string, and check at the last of ans string if it matches with 
// the part, then we delete those and continue till the end of string
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         string ans;
//         for(auto a : s) {
//             ans.push_back(a);
//             if(ans.size() >= part.size() && ans.substr(ans.size()-part.size())==part) {
//                 int m = part.size();
//                 while(m--) {
//                     ans.pop_back();
//                 }
//             }
//         }
//         return ans;
//     }
// };
