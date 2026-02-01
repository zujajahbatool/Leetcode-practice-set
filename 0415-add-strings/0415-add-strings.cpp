class Solution {
public:
    string addStrings(string num1, string num2) {
        int p1 = num1.size() - 1;
        int p2 = num2.size() - 1;
        int carry = 0;
        string result = "";

        while (p1 >= 0 || p2 >= 0 || carry) {
            int sum = carry;

            if (p1 >= 0)
                sum += num1[p1--] - '0';

            if (p2 >= 0)
                sum += num2[p2--] - '0';

            result.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
// class Solution {
// public:
//     string addStrings(string num1, string num2) {
//         int p1=num1.size()-1, p2=num2.size()-1, carry=0;
//         string result="";
//         while(p1>=0 ||p2>=0 ||carry){
//             long sum=0;
//             if(p1>=0){
//                 sum += num1[p1] - '0';
//                 p1--;
//             }
//             if(p2>=0){
//                 sum += num2[p2] - '0';
//                 p2--;
//             }
//             sum+=carry;
//             carry=sum/10;
//             result+=to_string(sum%10);
//         }
//         reverse(result.begin(), result.end());
//         return result;
//     }
// };