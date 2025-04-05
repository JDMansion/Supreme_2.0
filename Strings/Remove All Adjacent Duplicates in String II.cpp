// Remove All Adjacent Duplicates in String II  ( leetcode : 1209 )
// T.C = O(n)
// S.C = O(n)

class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        if(n < k) return s;

        stack<pair<int, int>> stack;
        for(int i=0; i<n; i++) {
            if(stack.empty() || stack.top().first != s[i]) {
                stack.push({s[i], 1});
            }
            else {
                auto prev = stack.top();
                stack.pop();
                stack.push({s[i], prev.second+1});
            }
            if(stack.top().second == k) stack.pop();
        }

        string ans = "";
        while(!stack.empty()) {
            auto curr = stack.top();
            stack.pop();
            while(curr.second--) {
                ans.push_back(curr.first);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
