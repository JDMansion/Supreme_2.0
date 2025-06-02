// Merge Alternately   (Debug Exercise)

/*
Test Case:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
*/
// string mergeAlternately(string word1, string word2) {
//         int m = word1.size();
//         int n = word2.size();
//         string result = "";
//         int i = 0, j = 0;

//         while (i < m || j < n) {
//             if (i < m) {
//                 result.push_back(word1[i++]);
//             }
//             else if (j < n) {
//                 result.push_back(word2[j++]);
//             }
//         }

//         return result;
//   }


// Solution :

#include <bits/stdc++.h>
using namespace std;

/*
Test Case:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
*/
string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string result = "";
        int i = 0, j = 0;

        while (i < m || j < n) {
            if (i < m) {
                result.push_back(word1[i++]);
            }
            if (j < n) {
                result.push_back(word2[j++]);
            }
        }
        
        return result;
    }

int main() {
	cout<<mergeAlternately("hello", "world")<<endl;
}
