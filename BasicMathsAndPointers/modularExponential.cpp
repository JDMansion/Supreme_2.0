//Modular Exponential   ( GFG )

class Solution {
  public:
    int powMod(int x, int n, int M) {
        // code here
        long long ans = 1;
        long long base = x;
        
        while(n > 0) {
            if(n & 1) {
                //odd
                ans = (ans * base) %M;
            }
            base = (base * base) %M;
            n >>= 1;
        }
        return (int)ans;
        
    }
};
