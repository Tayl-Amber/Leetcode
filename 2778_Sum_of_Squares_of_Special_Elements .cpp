class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
       int n = nums.size();
    int sum = 0;

    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            int divisor1 = i;
            int divisor2 = n / i;

            sum += nums[divisor1 - 1] * nums[divisor1 - 1];
            if (divisor1 != divisor2) 
                sum += nums[divisor2 - 1] * nums[divisor2 - 1];
        }
    }

    return sum;
    }
};
