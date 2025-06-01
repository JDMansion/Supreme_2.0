// Debug the code for adding 2 binary numbers

// string addBinary(string a, string b) {
//     string ans;
//     int carry = 0;
//     int i = a.length() - 1;
//     int j = b.length() - 1;

//     while (i >= 0 || j >= 0 || carry) {
//       if (i > 0)
//         carry += a[--i] - '0';
//       if (j > 0)
//         carry += b[--j] - '0';
//       ans += carry % 2 + '0';
//       carry =/ 2;
//     }

//     reverse(begin(ans), end(ans));
//     return ans;
//   }


// Correct Code :

#include <bits/stdc++.h>
using namespace std;

string binarySum(string a, string b) {
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;
    
    while(i >=0 || j >= 0 || carry) {
        int bit_sum = carry;
        if(i >= 0) {
            bit_sum += a[i] - '0';
            i--;
        }
        if(j >= 0) {
            bit_sum += b[j] - '0';
            j--;
        }
        
        ans.push_back((bit_sum % 2) + '0');
        
        carry = bit_sum / 2;
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
	cout<<binarySum("001", "110")<<endl;
}
