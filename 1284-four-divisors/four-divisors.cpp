class Solution {
public:
    int divisors(int n)
    {
        int divCount = 0, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0) 
            {
                sum += i;
                divCount++;
                if (divCount > 4) return 0;
            }
        }
        if (divCount == 4) return sum;
        return 0;
    }

    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans += divisors(nums[i]);
        }
        return ans;
    }
};