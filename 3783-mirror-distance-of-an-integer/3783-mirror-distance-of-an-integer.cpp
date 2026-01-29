class Solution {
public:
    int mirrorDistance(int n) {
        if(n >= 0 && n < 10) return 0;
        
        int reversed = 0;
        int temp = abs(n);
        
        while(temp > 0) {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }
        
        return abs(n - reversed);
    }
};