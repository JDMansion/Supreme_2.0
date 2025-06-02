// Sort Vowels in a String   (Debug Exercise)


// bool isVowel(char ch) {
//         return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
//     }
    
//     string sortVowels(string s) {
//         string t = s;
//         vector<char> vowel;
        
//         for(int i=0;i<s.length();i++){
//             if(isVowel(s[i])) vowel.push_back(s[i]);
//         }
        
//         if(vowel.size()==0) return s;
        
//         sort(vowel.begin(), vowel.end());
        
//         int j=0;
//         for(int i=0;i<t.length();i++){
//             if(isVowel(t[i])) {
//                 t[i]=vowel[++j];
//             }
//         }
        
//         return t;
//     }


// Solution : 

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    char upper_ch = toupper(ch);
    return (upper_ch=='A' || upper_ch=='E' || upper_ch=='I' || upper_ch=='O' || upper_ch=='U');
}
    
string sortVowels(string s) {
    string t = s;
    vector<char> vowel;
        
    for(int i=0;i<s.length();i++){
        if(isVowel(s[i])) vowel.push_back(s[i]);
    }
        
    if(vowel.size()==0) return s;
        
    sort(vowel.begin(), vowel.end());
        
    int j=0;
    for(int i=0;i<t.length();i++){
        if(isVowel(t[i])) {
            t[i]=vowel[j];
            j++;
        }
    }
    return t;
}

int main() {
	string st = "google";
	cout<<sortVowels(st)<<endl;

}
