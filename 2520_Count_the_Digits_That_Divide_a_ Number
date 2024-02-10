class Solution {
public:
    int countDigits(int num) {
        int count = 0;
    int originalNum = num;
    if (num == 0)
        return 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && originalNum % digit == 0)
            count++;
        num /= 10;
    }
    return count;
    }
};
