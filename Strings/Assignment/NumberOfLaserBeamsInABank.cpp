// Number of Laser Beams in a Bank   ( Leetcode : 2125 )

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        if(bank.size() == 1) return 0;
        vector<int> oneArray;
        int oneCount = 0;
        for(int i = 0; i < bank.size(); i++) {
            string row = bank[i];
            int count = 0;
            for(int j = 0; j < row.size(); j++) {
                if(row[j] == '1') count++;
            }
            if(count == 0) continue;
            oneCount = count;
            oneArray.push_back(oneCount);
        }

        if(oneArray.size() == 1 || oneArray.size() == 0) return 0;

        int ans = 0;
        for(int i = 0; i < oneArray.size() - 1; i++) {
            ans = ans + (oneArray[i] * oneArray[i + 1]);
        }
        return ans;
    }
};
