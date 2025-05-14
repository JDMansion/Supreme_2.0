// Que:
int mystoi(string s) {
        int len = s.size();
        double num = 0;
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        bool negative = s[i] == '-';
        negative == true ? i++ : i;
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + s[i];
            i++;
        }
        num = negative ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return num;
}


// Correct Sol:

#include <bits/stdc++.h>
using namespace std;

int mystoi(string s) {
        int len = s.size();
        long long num = 0;
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        bool negative = s[i] == '-';
        negative == true ? i++ : i;
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i] - '0');
            i++;
        }
        num = negative ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return num;
}

int main() {
	string s = "";
	cout<<mystoi(s)<<endl;
}
