#include <bits/stdc++.h>

using namespace std;

//sieve
vector < int > prime(int n) {
    if (n <= 1) return vector<int> (0);

    vector < int > ans;
    vector<bool> p(n, true);

    for (int i = 2; i <= n; i++) {
        if(p[i]) {
            ans.push_back(i);
            
            int j = i*i;
            
            while(j <= n) {
                p[j] = false;
                j = j + i;
            }
        }
    }
    return ans;
}

//segmented Sieve
int main() {
    int l = 2;
    int h = 10;

    vector < int > primeSqrt = prime(sqrt(h));
    
    vector<bool> seg(h-l+1, true);
    
    vector<int> ans;
    
    for(int p : primeSqrt) {
        //find the smalles multiple first
        int sm = max(((l/p) * p), p*p);
        
        if(sm < l) {
            sm += p;
        }
        
        for(int x = sm; x <= h; x += p) {
            seg[x] = false;
        }
    }
    
    for(int i = 2; i <= h; i++) {
        if(seg[i]) cout<<i<<" ";
    }

}
