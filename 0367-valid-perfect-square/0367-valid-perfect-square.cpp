class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1 || num == 0)
            return true;
        int start = 0;
        int end = num;
        while (start != end) {
            long long mid = (start + end) / 2;
            if(mid*mid == num) return true;
            else if(mid*mid < num){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }
        return false;
    }
};