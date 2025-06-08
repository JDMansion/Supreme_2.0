// String to Integer (atoi)   ( Leetcode : 8 )

class Solution {
public:
    int myAtoi(string s) {
        // int ans = 0;
        // bool sign = 1;
        
        // for(char c : s) {
        //     if(c == ' ') continue;
        //     if(c == '-') {
        //         sign = false;
        //         continue;
        //     }
        //     if(c >= '0' && c <= '9') {
        //         ans = ans * 10 + (c - '0');
        //     }
        //     else {
        //         break;
        //     }
        // }
        // if(!sign) return -1 * ans;
        // else return ans;

        long long result = 0;
        int sign = 1;
        int i = 0;

        //skip leading whitespace
        while(i < s.length() && s[i] == ' ') {
            i++;
        }

        //handling sign
        if(i < s.length() && (s[i] == '-' || s[i] == '+')) {
            if(s[i] == '-') sign = -1;
            i++;
        }

        //handling digits
        while(i < s.length() && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            //check for overflow for +ve sign
            if(result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > (INT_MAX % 10))) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            //check for overflow for -ve sign
            if(sign == -1 && (result > (static_cast<long long>(INT_MAX)+1) / 10 ||
                (result == (static_cast<long long>(INT_MAX)+1) / 10 && digit > (INT_MIN % 10 * -1)))) {
                return INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;

    }
    // The below is the cpp atoi method, which takes in a c-style string
    // int integer = atoi(s.c_str());
    // return integer;
};
