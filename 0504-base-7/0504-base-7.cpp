class Solution {
public:
    string convertToBase7(int num) {
        string base7;
        if(num==0) return "0";
        bool neg=num<0;
        num=abs(num);
        while(num>0){
            base7=to_string(num%7)+base7;
            num/=7;
        }
    return neg? "-"+base7: base7;
    }
};