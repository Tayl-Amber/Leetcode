#include <vector>
#include <cmath>

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) {
            int divCount = 0, sum = 0;
            for (int i = 1; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    sum += i;
                    divCount++;
                    if (i != num / i) {
                        sum += num / i;
                        divCount++;
                    }
                }
                if (divCount > 4) {
                    break;
                }
            }
            if (divCount == 4) {
                ans += sum;
            }
        }
        return ans;
    }
};