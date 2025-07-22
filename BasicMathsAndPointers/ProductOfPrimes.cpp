// Product of Primes  ( GFG )

class Solution {
  public:
    vector<bool> Seive(int n) {
        vector<bool> seive(n+1, true);
        
        seive[0] = seive[1] = false;
        
        for(int i=0; i*i <= n; i++) {
            if(seive[i]) {
                int j = i*i;
                
                while(j <= n) {
                    seive[j] = false;
                    j += i;
                }
            }
        }
        return seive;
    }
  
    int primeProduct(int L, int R) {
        vector<bool> seive = Seive(sqrt(R));
        vector<int> basePrime;
        
        for(int i=0; i<seive.size(); i++) {
            if(seive[i]) 
                basePrime.push_back(i);
        }
        
        vector<bool> segSeive(R-L+1, true);
        
        if(L == 1) 
            segSeive[0] = false;
            
        for(auto prime: basePrime) {
            int first_mul = (L / prime) * prime;
            
            first_mul = first_mul < L ? first_mul + prime : first_mul;
            
            int j = max(first_mul, prime*prime);
            
            while(j <= R) {
                segSeive[j - L] = false;
                j += prime;
            }
        }
        
        int mod = 1e9 + 7;
        long long ans = 1;
        
        for(int i=0; i<segSeive.size(); i++) {
            if(segSeive[i])
                ans = (ans * (L + i)) % mod;
        }
        return (int)ans;
    }
};
