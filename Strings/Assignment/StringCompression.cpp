// String Compression   ( Leetcode : 443 )


class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int j = i + 1;
        int count = 1;
        int index = 0;

        if(chars.size() == 1) return count;

        while(j < chars.size()) {
            if(chars[i] == chars[j]) {
                j++, count++;
            }
            else {
                chars[index++] = chars[i];
                if(count > 1) {
                    int start = index;
                    while(count) {
                        chars[index++] = (count % 10) + '0';
                        count = count / 10;
                    }
                    reverse(chars.begin() + start, chars.begin() + index);
                }
                i = j;
                j++;
                count = 1;
            }
        }

        chars[index++] = chars[i];
        if(count > 1) {
            int start = index;
            while(count) {
                chars[index++] = (count % 10) + '0';
                count = count / 10;
            }
            reverse(chars.begin() + start, chars.begin() + index);
        }
        return index;
    }
};
