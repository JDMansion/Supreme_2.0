// Remove all Occurances of a Substring   ( Leetcode : 1910 )

// Intuition : We are taking the first method where we used in-build functions like find and erase to delete the substring part.
// In this method we will be implementing the erase logic 

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(1) {
            int found = s.find(part);

            if(found == string::npos) break;

            string st1 = s.substr(0, found);
            string st2 = s.substr(found + part.size(), s.size());

            s = st1 + st2;
        }
        return s;
    }
};

//T.C = O(n^2)
//S.C = O(n)
