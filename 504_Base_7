class Solution {
public:
    string convertToBase7(int num) {
    if (num == 0) {
        return "0";
    }

    string result = "";

    
    bool isNegative = num < 0;
    

    num = abs(num);


    while (num > 0) {
        int remainder = num % 7;
        result = to_string(remainder) + result;
        num /= 7;
    }

   
    if (isNegative) {
        result = "-" + result;
    }

    return result;
    }
};
