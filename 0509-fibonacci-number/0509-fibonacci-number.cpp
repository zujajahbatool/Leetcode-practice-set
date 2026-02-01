class Solution {
public:
    int fib(int n) {
        if(n==0 ||n==1) return n;
        int f0=0, f1=1;
        for(int i=2; i<=n; i++){
            int rem=f1;
            f1=f0+f1;
            f0=rem;
        }
        return f1;
    }
};