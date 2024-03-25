class Solution {
public:
    int getMaxDigit(int num) {
        int max_digit = 0;
        while (num > 0) {
            int digit = num % 10;
            max_digit = max(max_digit, digit);
            num /= 10;
        }
        return max_digit;
    }
    
    int encrypt(int num) {
        int max_digit = getMaxDigit(num);
        int encrypted_num = 0;
        int multiplier = 1;
        
        while (num > 0) {
            encrypted_num += max_digit * multiplier;
            multiplier *= 10;
            num /= 10;
        }
        
        return encrypted_num;
    }
    
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            sum += encrypt(num);
        }
        return sum;
    }
};
